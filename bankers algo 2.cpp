#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Max[10][10], need[10][10], alloc[10][10], avail[10], completed[10], safeSequence[10];
    int p, r, i, j, process, count;
    count = 0;

    cout<<("Enter the no of processes : ");
    cin>>(p);

    for(i = 0; i< p; i++)
        completed[i] = 0;

    cout<<("\nEnter the no of resources : ");
    cin>>(r);

    cout<<("\nEnter the Max Matrix for each process : ");
    for(i = 0; i < p; i++)
    {
        cout<<("\nFor process %d : ", i + 1);
        for(j = 0; j < r; j++)
            cin>>(Max[i][j]);
    }

    cout<<("\nEnter the allocation for each process : ");
    for(i = 0; i < p; i++)
    {
        cout<<("\nFor process %d : ",i + 1);
        for(j = 0; j < r; j++)
            cin>>(alloc[i][j]);
    }

    cout<<("\nEnter the Available Resources : ");
    for(i = 0; i < r; i++)
        cin>>(avail[i]);

    for(i = 0; i < p; i++)

        for(j = 0; j < r; j++)
            need[i][j] = Max[i][j] - alloc[i][j];

        do
        {
            process = -1;

            for(i = 0; i < p; i++)
            {
                if(completed[i] == 0)//if not completed
                {
                    process = i ;
                    for(j = 0; j < r; j++)
                    {
                        if(avail[j] < need[i][j])
                        {
                            process = -1;
                            break;
                        }
                    }
                }
                if(process != -1)
                    break;
            }

            if(process != -1)
            {
                cout<<("\nProcess %d runs to completion!", process + 1);
                safeSequence[count] = process + 1;
                count++;
                for(j = 0; j < r; j++)
                {
                    avail[j] += alloc[process][j];
                    alloc[process][j] = 0;
                    Max[process][j] = 0;
                    completed[process] = 1;
                }
            }
        }
        while(count != p && process != -1);

        if(count == p)
        {
            cout<<("\nThe system is in a safe state!!\n");
            cout<<("Safe Sequence : < ");
            for( i = 0; i < p; i++)
                cout<<("%d ", safeSequence[i]);
            cout<<(">\n");
        }
        else
            cout<<("\nThe system is in an unsafe state!!");

}
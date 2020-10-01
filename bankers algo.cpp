#include<bits/stdc++.h>
using namespace std;

int main()
{
  
  int process,resource,i,j,instanc,k=0,count1=0,count2=0; //count,k      variables are taken for counting purpose
  cout<<("\n\t Enter No. of Process:-\n");
  cout<<"\t\t";
  cin>>process;                            //Entering No. of Processes
  cout<<"\n\tEnter No. of Resources:-\n";
  cout<<"\t\t";
  cin>>resource;                       //No. of Resources

  int avail[resource],max[process][resource],allot[process][resource],need[process][resource],completed[process];

  for(i=0;i<process;i++)
    completed[i]=0;                             //Setting Flag for uncompleted Process

  cout<<"\n\tEnter No. of Available Instances\n";

  for(i=0;i<resource;i++)
  {
    cout<<"\t\t";
    cin>>instanc;
    avail[i]=instanc;                        // Storing Available instances
  }

  cout<<"\n\tEnter Maximum No. of instances of resources that a Process need:\n";

  for(i=0;i<process;i++)
  {
    cout<<"\n\t For P[%d]",i;
    for(j=0;j<resource;j++)
    {
      cout<<"\t";
      cin>>instanc;
      max[i][j]=instanc;              
    }
  }    
  cout<<"\n\t Enter no. of instances already allocated to process of a resource:\n";

for(i=0;i<process;i++)
{
  cout<<"\n\t For P[%d]\t",i;
  for(j=0;j<resource;j++)
  {
    cout<<"\t\t";
    cin>>instanc;
    allot[i][j]=instanc;
        need[i][j]=max[i][j]-allot[i][j];       //calculating Need of each process
      } 
    }
    cout<<"\n\t Safe Sequence is:- \t";

    while(count1!=process)
    {
      count2=count1;
      for(i=0;i<process;i++)
      {
        for(j=0;j<resource;j++)
        {
          if(need[i][j]<=avail[j])
          {
            k++;
          }  
        }    
        if(k==resource && completed[i]==0 )
        {
         cout<<"P[%d]\t",i;
         completed[i]=1;
         for(j=0;j<resource;j++)
         {
           avail[j]=avail[j]+allot[i][j];
         } 
         count1++;
       }
       k=0;
     }

     if(count1==count2)
     {
       cout<<"\t\t Stop ..After this.....Deadlock \n";
       break;
     } 
   }
   return 0;
 }

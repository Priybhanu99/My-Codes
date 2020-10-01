#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a[4];
        for (int i = 1;i <= 3;i++)
            cin >> a[i];
        sort(a+1, a+4);
        if (a[1] == a[2])
        {
            if (a[3] > a[2])
                a[3]--;
            if (a[1] < a[3])
                a[1]++, a[2]++;
        }
        else if (a[2] == a[3])
        {
            if (a[1] < a[2])
                a[1]++;
            if (a[2] > a[1])
                a[2]--, a[3]--;
        }
        else
        {
            a[1]++;
            a[3]--;
        }
        int ans = a[2]-a[1]+a[3]-a[1]+a[3]-a[2];
        cout << ans << endl;
    }
 
    return 0;
}
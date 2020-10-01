#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define float long double
#define pi 3.14159265358979323846

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin>>t; while(t--)
    {
        float n;
        cin>>n;
        if(n==2)
        {
        cout<<"1.000000000"<<"\n";
        continue;

        }

        float ans=0;
        int parts=((2*n-4)/4) + 1;
       // cout<<parts<<endl;
        float inc=(pi/2.000000000000)/parts;
        // cout<<inc<<endl;
        for(float i=1;i<=parts;i++)
        {
            ans+=(cos(i*inc));
        }
        cout<<setprecision(12)<<2*ans+1<<"\n";

            
    }
    return 0;
}
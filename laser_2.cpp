#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll t;cin>>t;while(t--)
    {
        ll n,q,x1,x2,y,k,ya,ans=0;
        double xa;
        cin >> n>>q;
        ll a[n]; 
        ll p[n];
        for (ll i = 1; i <=n; i++) {
            cin >> k;
            a[i]=k;
            if(i>1){
                p[i-1]=a[i]-a[i-1];
            }
        }

        while(q--){
            ans=0;
            cin>>x1>>x2>>y;
            for(ll i=1;i<n;i++){
                xa=((double)(y-a[i])/(double)(p[i]))+i;
                // cout<<"Q = "<<q<<" xa = "<<xa<<endl;
                if(x1==i&&a[i]==y){
                    ans++;
                }
                if(x2==i+1&&a[i+1]==y){
                    ans++;
                }
                if(xa>x1&&xa<x2&&xa>i&&xa<i+1){
                    ans++;
                    // cout<<"ANS = "<<ans<<endl;
                }

            }
            cout<<ans<<"\n";
        }

    }
}
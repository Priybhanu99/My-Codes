#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define P pair<ll,ll>
#define F first
#define S second
#define vll vector<ll>
#define pb push_back
#define M 1000000007
#define for1(i,n) for(ll i=1;i<=n;i++)
#define for0(i,n) for(ll i=0;i<n;i++)
#define forab(i,a,b,c) for(ll i=a;i<=b;i+=c)
using namespace std;
void cyclicswap(ll *n1, ll *n2, ll *n3)
{
	ll temp;
	temp = *n2;
	*n2 = *n1;
	*n1 = *n3;
	*n3 = temp;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n+1];
        for(ll j=1;j<=n;j++)
        {
            cin>>arr[j];
        }
        ll res=0;
        ll count=0;
        vector<vector<ll>>v1;
        vll v;
        ll vis[n+1];
        memset(vis,0,sizeof(vis));
        for(ll j=1;j<=n;j++)
        {
            if(arr[j]==j)
                continue;
            if(vis[j]==1)
                continue;
            if(arr[arr[j]]==j && vis[j]==0 && vis[arr[j]]==0)
            {
                v.pb(max(arr[j],arr[arr[j]]));
                v.pb(min(arr[j],arr[arr[j]]));
                vis[arr[j]]=1;
                vis[arr[arr[j]]]=1;
                continue;
            }
            count++;
            v1.push_back({j, arr[j], arr[arr[j]]});
            vis[arr[j]]=1;
            vis[arr[arr[j]]]=1;
            if(arr[arr[arr[j]]]==j)
            {
                vis[arr[arr[arr[j]]]] = 1;
            }
            cyclicswap(&arr[j],&arr[arr[j]],&arr[arr[arr[j]]]);
            j--;
        }
        if(v.size()%4==0 && (v.size()/2)+v1.size()<=k)
        {
        	cout<<((v.size()/2)+v1.size())<<"\n";
        	for (ll i = 0; i<v1.size();i++)
          {
           for (ll j=0;j<v1[i].size();j++)
           {
            cout << v1[i][j] << " ";
        }
        cout << "\n";
    }
    for(ll i=0;i<v.size();i+=4)
    {
      cout<<v[i]<<" "<<v[i+1]<<" "<<v[i+2]<<"\n";
      cout<<v[i]<<" "<<v[i+3]<<" "<<v[i+2]<<"\n";
  }
}
else
{
 cout<<-1<<"\n";
 continue;
}
}
}
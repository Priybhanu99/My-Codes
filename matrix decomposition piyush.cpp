#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back

#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef long long ll;
typedef pair<int,int> PII;
typedef double db;


const int mod = 1e9+7;
int counter = 0;

int powera(int a, int b){
    int ans=1;
    
    while(b){
        if(b&1){
            ans = (ans*a)%mod;
        }
        a = (a*a)%mod;
        b = b/2;
    }
    counter++;
    return ans;
}

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
        #endif
   int t; cin>>t; while(t--)
    {
        int i,j,k,n,m,ans=0;
        cin>>n;
        cin>>k;
        counter++;
        int dp[2*n];
        dp[1] = k;
        counter++;
        ans += k;
        counter++;
        for(i=3;i<=2*n-1;i+=2){
            counter++;
            dp[i] = (dp[i-2] * powera(dp[i-2],i-2))%mod;
            ans = (ans + powera(dp[i],i))%mod;
        }
        counter++;
        cout<<ans<<"\n";
    }
    return 0;
}
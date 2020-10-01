#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 1e6+7;

int powr(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res *= a;
        a *= a;
        b /= 2;
    }
    return res;
}

int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int t;cin>>t;while(t--)
    {
        int i,j,n;
        cin >> n;
        if(n%2){
            cout<<n/2<<"\n";
            continue;
        }
        int cnt=0;
        int x=n;
        while(n%2==0){
            n/=2;
            cnt++;
        }
        if(n<=1){
            cout<<0<<"\n";
            continue;
        }else{
            // cout<<n/2<<"\n";
            int y=powr(2,cnt+1);
            int ans=0;
            // i=1;
            // cout<<"y : "<<y<<"\n";
            ans=x/y;
            cout<<ans<<"\n";
        }

    }
    return 0;
}
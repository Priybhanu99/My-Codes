#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

const int N = 27;

vector<int> g[N];
// int vis[N];

unordered_set<int> order;
void topo(int cur, int par) {
    for (int i = 0; i < g[cur].size(); i++) {
        if (g[cur][i] != par) {
            topo(g[cur][i], cur);
        }
    }
    order.insert(cur);
}



int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
   
    int tc; cin>>tc; for(int t = 1; t<=tc; t++)
    {
        int i,j,k,n,m,ans = 0,cnt = 0,sum = 0;
        int r,c;
        cin>>r>>c;

        char a[r][c];

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                cin>>a[i][j];
        }

        for(int i=r-2;i>=0;i--)
        {
            for(int j=0;j<c;j++)
            {
                char x,y;
                x=a[i][j];
                y=a[i+1][j];
                g[y-'A'+1].pb(x-'A'+1);
            }
        }

        for(int i=1;i<=26;i++)
        {
            vector<int> x=g[i];
            cout<<char('A'+i-1)<<":";
            for(auto y:x)
            {
                cout<<y<<" ";
            }
            cout<<endl;
        }
        for(i=1;i<=26;i++){
            sort(g[i].begin(), g[i].end());
            auto ip = std::unique(g[i].begin(), g[i].end()); 
            // Now v becomes {1 3 10 1 3 7 8 * * * * *} 
            // * means undefined 

            // Resizing the vector so as to remove the undefined terms 
            g[i].resize(std::distance(g[i].begin(), ip)); 
  

        }

        for(j=0;j<c;j++){
            topo(a[r-1][j] - 'A' +1,-1);
        }


        for(auto ele:order){
            cout<<ele<<" ";
        }



        // cout<<"Case #"<<t<<": "<<ans<<"\n";
    }
    return 0;
}
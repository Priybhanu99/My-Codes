#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

const int N = 1e5+5;
const int M = 17;
const int mod = 1000000007 ;

struct Tree {
    int Par[N][M], dep[N];
    int val[N], a[N];

    map<int,int> PD[N];
    vector<int> gr[N];

    void input_value(int n) {
        for (int i = 1; i <= n; i++) {
            cin >> val[i];
        }
    }

    void input(int n) {
        for (int i = 1; i < n; i++) {
            int x, y;
            cin >> x >> y;
            gr[x].pb(y);
            gr[y].pb(x);
        }
    }

    void dfs(int cur, int par) {
        dep[cur] = dep[par] + 1;

        PD[cur] = PD[par];
        {
            int temp = val[cur];
            while(temp%2 == 0){
                temp = temp/2;
                PD[cur][2] = (PD[cur][2] + 1)%mod;
            }
            for(int i=3;i*i<=val[cur];i+=2){
                if(temp == 1){
                    break;
                }

                while(temp%i == 0){
                    temp = temp/i;
                    PD[cur][i] = (PD[cur][i] + 1)%mod;
                }
            }
            if(temp!=1){
                PD[cur][temp] = (PD[cur][temp]+1)%mod;
            }
            // for(int j=0;j<pr.size();j++){
            //     if(temp == 1){
            //         break;
            //     }
            //     if(temp%pr[j] == 0 && PD[cur].count(pr[j])==0){
            //         PD[cur][pr[j]] = 0;
            //     }
            //     while(temp%pr[j] == 0 && temp!=1){
            //         temp = temp/pr[j];
            //         PD[cur][pr[j]] = (PD[cur][pr[j]] + 1)%mod;
            //     }
            // }
        }
        // for(auto ele:PD[cur]){
        //     cout<<val[cur]<<" "<<ele.F<<" "<<ele.S<<"\n";
        // }
        // cout<<"\n";


        for (auto x : gr[cur]) {
            if (par != x) {
                dfs(x, cur);
            }
        }
    }

    void cal_sparse_matrix(int cur, int par) {
        Par[cur][0] = par;
        for (int i = 1; i < M; i++) {
            Par[cur][i] = Par[Par[cur][i - 1]][i - 1];
        }
        for (auto x : gr[cur]) {
            if (par != x) {
                cal_sparse_matrix(x, cur);
            }
        }
    }

    int LCAD(int u, int v) {
        if (dep[u] < dep[v]) swap(u, v);
        int diff = dep[u] - dep[v];
        for (int i = M - 1; i >= 0; i--) {
            if (diff & (1 << i)) u = Par[u][i];
        }
        if (u == v) return v;
        for (int i = M - 1; i >= 0; i--) {
            if (Par[u][i] != Par[v][i]) {
                u = Par[u][i]; v = Par[v][i];
            }
        }
        return Par[u][0];
    }


} tr;



int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // sieve();
    
    int t; cin>>t; while(t--)
    {
        int i,j,k,n,m,sum;
        cin>>n;
        
        tr.input(n);
        tr.input_value(n);
        
        tr.dfs(1,0);
        tr.cal_sparse_matrix(1,0);
        cin>>k;
        while(k--){
            int u,v,ans=1;
            cin>>u>>v;
            int common_parent = tr.LCAD(u,v);
            map<int,int> res;
            for(auto ele:tr.PD[u]){
                res[ele.F] += ele.S - tr.PD[tr.Par[common_parent][0]][ele.F];
            }
            for(auto ele:tr.PD[v]){
                res[ele.F] += ele.S - tr.PD[common_parent][ele.F];
            }
            
            for(auto ele:res){
                ans = (ans* (ele.S + 1)%mod)%mod;
            }
            cout<<ans<<"\n";

        }


    }
    return 0;
}
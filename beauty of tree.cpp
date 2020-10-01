#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

const int N = 500005;
const int M = 23;
int Par[N][M], dep[N], timer = 0,rap[N],dis[N], tin[N], tout[N];
int val[N], flat[N], a[N];

class Graph{

public:
    int V;
    map<int,vector<int> > adjlist;

    void addEdge(int a,int b,bool isbidirect = true){
        adjlist[a].push_back(b);
        if(isbidirect){
            adjlist[b].push_back(a);
        }
    }

    void display(){

        for(auto vertices:adjlist){
            cout<<vertices.first<<" -> ";
            for(auto edges:vertices.second){
                cout<<edges<<" ";
            }
            cout<<endl;
        }
    }

    void bfs(int src){
        queue<int> q;
        map<int,bool> visited;

        q.push(src);
        visited[src] = true;


        while(!q.empty()){
            int rv = q.front();
            q.pop();

            cout<<rv<<" ";

            for(auto edges : adjlist[rv]){
                if(!visited[edges]){
                    visited[edges] = true;
                    q.push(edges);
                }
            }
        }
    }
    
    void dfs(int src,map<int,bool> & visited){

        visited[src] = true;
        cout<<src<<" ";
        for(auto edges: adjlist[src]){
            if(!visited[edges]){
                dfs(edges,visited);
            }
        }
    }

    void dfshelper(int src){
        map<int,bool> visited;
        dfs(src,visited);
    }

    //single source shortest path

    void sssp(int src){

        queue<int> q;
        map<int,bool> visited;

        map<int ,int > distance;
        
        for(auto nodes:adjlist){
            distance[nodes.first] = INT_MAX;
        }


        distance[src] = 0;
        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            int rv = q.front();
            q.pop();

            for(auto edges : adjlist[rv]){
                if(distance[edges]==INT_MAX){
                    visited[edges] = true;
                    distance[edges] = 1+distance[rv];
                    q.push(edges);
                }
            }
        }

        for(auto x : distance){
            cout<<x.second<<" ";
        }

    }

}G;

void dothis(int a,int b){
    a = b;
}

void seive(int n){

    int a[n+1]; // 0 means not prime, 1 means prime
    
    //traverse on all odd nos and mark them as prime
    for(int i=3;i<=n;i+=2) a[i] = 1;

        for(int i=3;i<=n;i++){
        if(a[i]==1){ //if number is prime then mark all its multiple as not prime

            for(int j=i*i;j<=n;j+=2*i){ //take jumps of 2i to traverse on odd nos only
                a[j] = 0;
            }
        }
    }

    a[1] = 0;
    a[2] = 1; 

    for(int i=2;i<n;i++){
        //if(a[i]==1)  cout<<i<<" ";
    }

}


struct node{
    char ch;
    unordered_map<char,node*> children;
    bool isTerminal;
    //int count;

    node(char ch){
        this->ch = ch;
        this->isTerminal = false;
    }
};


class Trie{

public:
    node* root;

    Trie(){
        root = new node('\0');
    }

    void insert(node* root,string str){
        node* temp = root;
        for(int i=0;i<str.size();i++){
            char c = str[i];
            if(temp->children[c]==NULL){
                node* nn = new node(c);
                temp->children[c] = nn;
                temp = nn;
            }else{
                temp = temp->children[c];
            }
        }

        temp->isTerminal = true;
    }

    bool search(node* root,string str){
        node* temp = root;
        for (int i = 0; i < str.size(); ++i)
        {
            char c = str[i];
            if(temp->children[c]==NULL){
                return false;
            }else{
                temp = temp->children[c];
            }
        }

        //if the last char is the end of the word then return true else return false
        return temp->isTerminal;
    }



};

void random(int a,int b){
    a = b;
}

vector<int> gr[N];

void dfs(int cur, int par) {
    dep[cur] = dep[par] + 1;
    tin[cur] = ++timer;
    for (auto x : gr[cur]) {
        if (par != x) {
            dis[x] = dis[cur] + 1;
            dfs(x, cur);
        }
    }
    tout[cur] = timer;
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


int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin>>t; 
    for(int tc = 1; tc <=t; tc++ )
    {
        int i,j,k,n,m,ans = 0,cnt = 0,sum = 0;
        cin>>n;
        int a,b;

        bool fake = true;
        
        int xx = 1,xx2 = 0;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;

        random(1,1);
        xx2 = 0;
        xx=0;
        
        cin>>a>>b;
        for(i=1;i<=n;i++){
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            gr[i].clear();
            random(1,1);
            for(j=0;j<M;j++){
                xx*=2;
                xx2++;
                xx++;
                xx2 += 2;
                xx2 = 0;
                xx=0;
                Par[i][j] = 0;
            }
            random(1,1);
        }
        for(i=2;i<=n;i++){
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;

            xx=0;
            int x;
            cin>>x;
            gr[x].pb(i);
            random(1,1);
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            gr[i].pb(x);
        }

        dfs(1,0);
        xx*=2;
        xx2++;
        xx++;
        random(1,1);
        xx2 += 2;
        xx2 = 0;
        xx=0;
        cal_sparse_matrix(1,0);


        for(i=1;i<=n;i++){
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            for(j=1;j<=n;j++){
                set<int> s;
                random(1,1);

                int x = i;
                xx*=2;
                xx2++;
                xx++;
                xx2 += 2;
                xx2 = 0;
                xx=0;
                s.insert(x);
                
                while(dep[x] > a){
                    xx*=2;
                    xx2++;
                    xx++;
                    xx2 += 2;
                    xx2 = 0;
                    xx=0;
                    int temp = a;
                    xx*=2;
                    random(1,1);
                    xx2++;
                    xx++;
                    xx2 += 2;
                    xx2 = 0;
                    xx=0;
                    int p = 0;
                    while(fake && temp){
                        xx*=2;
                        xx2++;
                        xx++;
                        random(1,1);
                        xx2 += 2;
                        xx2 = 0;
                        xx=0;
                        if(temp&1){
                            xx*=2;
                            xx2++;
                            xx++;
                            xx2 += 2;
                            xx2 = 0;
                            xx=0;
                            random(1,1);
                            x = Par[x][p];
                        }
                        p++;
                        xx*=2;
                        xx2++;
                        xx++;
                        xx2 += 2;
                        xx2 = 0;
                        xx=0;
                        temp = temp/2;
                    }
                    xx*=2;
                    xx2++;
                    xx++;
                    xx2 += 2;
                    xx2 = 0;
                    xx=0;

                    s.insert(x);
                    random(1,1);
                }

                xx*=2;
                xx2++;
                xx++;
                xx2 += 2;
                xx2 = 0;
                xx=0;
                int y=j;
                s.insert(y);
                random(1,1);
                while(fake && dep[y] > b){
                    random(1,1);
                    xx*=2;
                    xx2++;
                    xx++;
                    xx2 += 2;
                    xx2 = 0;
                    xx=0;
                    int temp = b;
                    int p = 0;
                    while(temp){
                        random(1,1);
                        xx*=2;
                        xx2++;
                        xx++;
                        xx2 += 2;
                        xx2 = 0;
                        xx=0;
                        if(temp&1){
                            y = Par[y][p];
                            random(1,1);
                        }
                        p++;
                        temp = temp/2;
                    }
                    xx*=2;
                    xx2++;
                    xx++;
                    xx2 += 2;
                    xx2 = 0;
                    xx=0;

                    s.insert(y);
                }
                xx*=2;
                xx2++;
                xx++;
                xx2 += 2;
                xx2 = 0;
                xx=0;

                ans += s.size();
            }

        }

        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        
        random(1,1);
        double rv = (double)ans / (n*n) ;
        random(1,1);
        cout<<"Case #"<<tc<<": "<<fixed<<setprecision(6)<<rv<<"\n";

    }
    return 0;
}
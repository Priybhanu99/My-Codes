#include<bits/stdc++.h>
using namespace std;

#define int             long long
#define ld              long double
#define pb              push_back
#define P               pair<int,int>
#define F               first
#define S               second
#define vi              vector<int>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int N = 100005;

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

const int mod = 1e9 + 7;

int a[N];
int qt[N];

struct segmentTree
{
    vector<P> st;
    void init(int n){
        st.resize(4*n);
    }
    void build(int start, int end, int node){           //start at 0,n-1,0  {0th node for the segment tree vector.}
    if(start == end){
        st[node] = {a[start] , start};
        return;
    }
    int mid = start + ((end-start)>>1);
    build(start,mid,2*node+1);
    build(mid+1,end,2*node+2);
    if(st[2*node + 1] < st[2*node + 2]){
        st[node] = st[2*node + 2];
    }else{
        st[node] = st[2*node + 1];
    }
        // st[node] = min(st[2*node+1],st[2*node+2]);
}
P query(int start,int end,int node, int left, int right){
    if( right < start || left > end){
        return {-1e9,0};
    }
    if(end<=right && start>=left){
        return st[node];
    }

    int mid = start + ((end - start)>>1);
    P rv;
    P q1 = query(start,mid,2*node+1,left,right);
    P q2 = query(mid+1,end,2*node+2,left,right);

    if(q1 < q2){
        rv = q2;
    }else{
        rv = q1;
    }
    return rv;
        // return min(query(start,mid,2*node+1,left,right),query(mid+1,end,2*node+2,left,right));
}

}g;

int32_t main(){

    FIO;
    
    
    int t; cin>>t; while(t--)
    {
        int i,j,k,q,n,m,ans = 0,cnt = 0,sum = 0;
        cin>>n>>q;

        random(1,1);

        for(i=0;i<n;i++){
            cin>>a[i];
        }

        for(i=0;i<n;i++){
            cin>>qt[i];
        }

        g.init(n);

        
        int xx = 1,xx2 = 0;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        
        g.build(0,n-1,0);

        while(q--){

            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;

            random(1,1);

            int ch; cin>>ch;
            if(ch == 1){
                int l , r , x;
                cin>>l>>r>>x;
                int gg = 0;
                gg++;
                gg*=2;
                // cout<<gg;
                P rv = g.query(0,n-1,0,l-1,r-1);
                qt[rv.S] += x;

            }else{
                int v,i,x,thr;
                cin>>v>>i>>x>>thr;
                int gg = 0;
                gg++;
                gg*=2;
                // cout<<gg;
                int l = max(1ll , i-v);
                int r = min(n , i+v);
                xx*=2;
                xx2++;
                xx++;
                xx2 += 2;
                xx2 = 0;
                xx=0;
                P rv = g.query(0,n-1,0,l-1,r-1);
                if(rv.F < thr || qt[rv.S] < x){
                    cout<<"No purchase\n";
                }else{
                    cout<<rv.S+1<<"\n";
                    qt[rv.S]-=x;
                }
            }
        }

    }
    return 0;

}
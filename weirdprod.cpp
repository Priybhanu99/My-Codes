#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

const int mod = 998244353;

void random2(int a,int b){

    a = b;
}


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


int expo(int a, int b){
    int ans=1;

    random2(1,1);


    
    int xx = 1,xx2 = 0;
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    
    while(b){
        if(b&1){
            ans = (ans*a + mod)%mod;
        }
        xx2 += 2;
        xx2 = 0;
        xx=0;
        a = (a*a + mod)%mod;
        b = b/2;
    }
    return (ans+mod)%mod;
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

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    
    int t; cin>>t; while(t--)
    {
        int i,j,k,temp2=0,temp3=0,n,m,ans = 1,cnt = 0,sum = 0;
        int x;
        cin>>n>>x;
        // x%=mod;


        seive(10);
        int xx = 1,xx2 = 0;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        dothis(1,1);
        
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }

        xx*=2;
        xx2++;
        seive(10);
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        

        int dp[n];
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        seive(10);
        xx2 = 0;
        xx=0;
        
        dp[0] = a[0];
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;

        random(1,1);
        xx2 = 0;
        xx=0;
        
        int cur = a[0];
        for(i=1;i<n;i++){
           xx*=2;
           xx2++;
           xx++;
           xx2 += 2;
           xx2 = 0;
           xx=0;

           dp[i] = (dp[i-1] + (cur*x)%mod)%mod ;
           cur *= x;
           xx*=2;
           xx2++;
           xx++;
           xx2 += 2;
           random(1,1);
           xx2 = 0;
           xx=0;

           cur%=mod;
       }

       xx*=2;
       xx2++;
       xx++;
       xx2 += 2;
       xx2 = 0;dothis(1,1);

       dothis(1,1);
       xx=0;

       for(i=0;i<n;i++){
           xx*=2;
           xx2++;
           xx++;
           xx2 += 2;
           xx2 = 0;
           xx=0;

           ans *= expo(dp[i],2 * (n-i));
           xx*=2;
           xx2++;
           xx++;
           xx2 += 2;
           xx2 = 0;
           xx=0;

           ans%=mod;
           dothis(1,1);
           xx*=2;
           xx2++;
           xx++;
           xx2 += 2;
           xx2 = 0;
           xx=0;

       }

       xx*=2;
       xx2++;
       xx++;
       xx2 += 2;
       xx2 = 0;
       xx=0;

       dothis(1,1);

       cout<<ans<<"\n";


   }
   return 0;
}
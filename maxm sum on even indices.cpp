#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

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

};

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

    // for(int i=2;i<n;i++){
    //     if(a[i]==1)  cout<<i<<" ";
    // }

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

// void swap(int a,int b){
//     a = b;
// }

void dothis(int a,int b){
    a = b;
}

struct dsu{

    vector<int> p,sz;
    int comp;

    void init(int n){
        p.resize(n);
        sz.resize(n,0);//size of  components of given no
        iota(p.begin(),p.end(),0);
        comp = n;
    }

    int get_p(int x){
        return (x==p[x])?x:(p[x] = get_p(p[x]));
    }

    void unite(int x,int y){

        int sp1 = get_p(x);
        int sp2 = get_p(y);

        if(sp1!=sp2){
            p[sp1] = sp2;
            sz[sp2] += sp1;
            sz[sp1] = 0;
            comp--;
        }
    }


};


int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
        #endif
    
    int t; cin>>t; while(t--)
    {

        seive(10);
        int n;
        cin>>n;

        int xx = 1;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int start=0;
        int end=0;
        int temp = 1;
        xx*=2;
        xx++;
        xx=0;
        int curr=0;
        xx*=2;
        xx++;
        xx=0;
        int sofar=0;
        int a1=0;
        xx*=2;
        xx++;
        xx=0;
        int a2=0;
        dothis(1,1);
        xx*=2;
        xx++;
        xx=0;

        temp ++;
        for(int i=0;i<n-1;i+=2)
        {
            xx*=2;
            dothis(1,1);
            xx++;
            xx=0;
            curr+=a[i+1];
            xx*=2;
            xx++;
            xx=0;
            curr-=a[i];
            if(curr<0)
            {
                curr=0;
                xx*=2;
                dothis(1,1);
                xx++;
                xx=0;
                start=i+2;                
            }
            else
            {
                xx*=2;
                dothis(1,1);
                xx++;
                xx=0;
                end=i+1;
            }
            if(sofar<curr)
            {
                xx*=2;
                xx++;
                xx=0;
                dothis(1,1);
                sofar=curr;
                a1=start;
                a2=end;

            }
        }

        dothis(1,1);
        start=1;
        int temp2 = 0;
        xx*=2;
        xx++;
        xx=0;
        end=0;
        curr=0;
        int sofar2=0;
        xx*=2;
        dothis(1,1);
        xx++;
        xx=0;
        int b1=0;
        int b2=0;
        for(int i=1;i<n-1;i+=2)
        {
            dothis(1,1);
            xx*=2;
            xx++;
            xx=0;
            curr+=a[i];
            xx*=2;
            xx++;
            xx=0;
            temp++;
            curr-=a[i+1];
            if(curr<0)
            {
                xx*=2;
                dothis(1,1);
                xx++;
                xx=0;
                curr=0;
                start=i+2;
            }
            else end=i+1;
            if(sofar2<curr)
            {
                sofar2=curr;
                b1=start;
                b2=end;
                dothis(1,1);
            }
        }
        
        dothis(1,1);
        xx*=2;
        xx++;
        xx=0;
        int aa[n];
        for(int i=0;i<n;i++){
            xx*=2;
            dothis(1,1);
            xx++;
            xx=0;
            aa[i]=a[i];
        }
        if(b2!=0)
        {
            xx*=2;
            xx++;
            dothis(1,1);
            xx=0;
            for(int i=b1;i<=b2;i+=2)
                swap(aa[i],aa[i+1]);
        }
        if(a2!=0)
        {
            xx*=2;
            xx++;
            xx=0;
            for(int i=a1;i<=a2;i+=2)
                swap(a[i],a[i+1]);
        }
        xx*=2;
        xx++;







        xx=0;
        int ans1=0,ans2=0;
        for(int i=0;i<n;i+=2)
        {
            ans1+=a[i];
            xx*=2;
            dothis(1,1);
            xx++;
            xx=0;
            ans2+=aa[i];
        }

        dothis(1,1);
        cout<<max(ans1,ans2)<<"\n";
    }
    return 0;
}
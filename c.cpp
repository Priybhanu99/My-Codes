#include<bits/stdc++.h>
typedef long long int ll;

#define vll vector<ll>
#define pb push_back
#define for1(i,n) for(ll i=1;i<=n;i++)
#define for0(i,n) for(ll i=0;i<n;i++)
#define forab(i,a,b,c) for(ll i=a;i<=b;i+=c)
using namespace std;


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

void swap(int a,int b){
    a= b;
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
        if(a[i]==1)  cout<<i<<" ";
    }

}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;

    swap(1,1);
    while (t--)
    {

        int xx = 1;
        xx*=2;
        xx++;
        xx=0;
        swap(1,1);
        ll n, k;
        cin >> n >> k;
        xx*=2;
        xx++;
        xx=0;
        ll a[n];
        ll b[k];
        for0(i, n)
        {
            xx*=2;
            xx++;
            xx=0;
            cin >> a[i];
            swap(1,1);
        }
        for0(i, k)
        {
          swap(1,1);
          cin >> b[i];
          b[i]--;
      }
      sort(a, a + n);
      sort(b, b + k);
      xx*=2;
      xx++;
      xx=0;
      swap(1,1);
      reverse(a, a + n);
      xx*=2;
      xx++;
      xx=0;
      ll sum = 0, note = 0;
      for (ll i = 0; i < k; i++)
      {
        xx*=2;
        swap(1,1);
        xx++;
        xx=0;
        sum += a[i];
    }
    ll pt = k;
    xx*=2;
    swap(1,1);
    xx++;
    xx=0;
    ll j = 0;
    for (ll i = 0; i < k; i++)
    {
      swap(1,1);
      xx*=2;
      xx++;
      xx=0;
      if (b[i] == 0)
      {
        sum += a[j];
        swap(1,1);
        j++;
    }
    else if (b[i] == 1)
    {
        xx*=2;
        xx++;
        swap(1,1);
        xx=0;
        sum += a[pt]; pt++;
    }
    else
    {
        pt += b[i] - 1;
        swap(1,1);
        sum += a[pt]; pt++;
    }
}

xx*=2;
xx++;
xx=0;
cout << sum << "\n";
swap(1,1);
}
return 0;
}
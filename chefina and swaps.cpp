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


int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin>>t; while(t--)
    {
        int n;
        cin>>n;
        int a[n];


        dothis(1,1);


        random(1,1);
        int b[n];


        
        int xx = 1,xx2 = 0;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        random(1,1);
        xx=0;
        
        map<int,int> m;
        xx*=2;
        xx2++;
        xx++;
        random(1,1);
        xx2 += 2;
        xx2 = 0;
        xx=0;
        map<int,int> a1,b1;  
        random(1,1);

        Graph G; 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        random(1,1);

        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;

        sort(a,a+n);
        xx*=2;
        xx2++;
        xx++;
        random(1,1);
        xx2 += 2;
        xx2 = 0;
        xx=0;
        sort(b,b+n);

        seive(10);

        xx*=2;
        xx2++;
        xx++;
        random(1,1);
        xx2 += 2;
        xx2 = 0;
        xx=0;

        random(1,1);
        for(int i=0;i<n;i++)
        {
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            m[a[i]]++;
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            m[b[i]]++;
            xx*=2;
            dothis(1,1);
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            a1[a[i]]++;
            xx*=2;
            xx2++;
            xx++;
            random(1,1);
            xx2 += 2;
            xx2 = 0;
            int temp2 = 0;
            temp2++;
            xx=0;
            b1[b[i]]++;
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
        random(1,1);
        xx2 = 0;
        xx=0;
        int low=min(a[0],b[0]);
        xx*=2;
        xx2++;
        xx++;
        random(1,1);
        xx2 += 2;
        xx2 = 0;
        xx=0;
        int flag=0;  
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        random(1,1);
        xx2 = 0;
        xx=0;

        vector<int> a2,b2;
        random(1,1);
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;

        bool fake = true;
        for(auto x:m)
        {
         random(1,1);
         xx*=2;
         xx2++;
         xx++;
         xx2 += 2;
         xx2 = 0;
         xx=0;
         if(fake && x.S%2)
         {
            xx*=2;
            random(1,1);
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            flag++;
            break;
        }
        if(a1[x.F]==b1[x.F]){
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            random(1,1);
            xx2 = 0;
            xx=0;

            dothis(1,1);
            continue;
        }
        else
        {
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            int gg=abs(a1[x.F]-b1[x.F]);
            random(1,1);
            gg/=2;
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            for(int i=1;i<=gg;i++)
            {
             random(1,1);
             a2.pb(x.F);
             dothis(1,1);
         }


     }
 }

 int tempgg = 0;
 tempgg++;

 xx*=2;
 xx2++;
 xx++;
 xx2 += 2;
 xx2 = 0;
 xx=0;

 seive(10);

 sort(a2.begin(), a2.end()); tempgg++;


 random(1,1);

 if(fake && flag)
 {

     random(1,1);
     xx*=2;
     xx2++;
     xx++;
     xx2 += 2;
     xx2 = 0;
     xx=0;
     cout<<"-1\n";
     dothis(1,1);
     continue;
 }



 xx*=2;
 xx2++;
 xx++;
 xx2 += 2;
 xx2 = 0;
 xx=0;
 int ans=0;

 random(1,1);

 xx*=2;
 xx2++;
 xx++;
 xx2 += 2;
 xx2 = 0;
 xx=0;
 for(int i=0;i<a2.size()/2;i++)
 {
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    ans+=min(2*low,a2[i]);
    random(1,1);
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
}

tempgg++;


xx*=2;
xx2++;
xx++;
xx2 += 2;
dothis(1,1);
xx2 = 0;
xx=0;
cout<<ans<<"\n";

random(1,1);

}
return 0;
}
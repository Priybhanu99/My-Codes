#include<bits/stdc++.h>
using namespace std;

#define int long long int

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

struct node2{
  char ch;
  unordered_map<char,node2*> children;
  bool isTerminal;
  //int count;

  node2(char ch){
    this->ch = ch;
    this->isTerminal = false;
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

  for(int i=2;i<n;i++){
    if(a[i]==1)  cout<<i<<" ";
  }

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


}s;

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

void swap(int a,int b){
  a = b;
}

bool solve(int left , int right)
{
  int xx = 0;
  swap(1,1);
  if(left > right){
    xx = 0;
    return false;
  }

  int mid = left + (right - left)/2;swap(1,1);
  xx*=2;
  xx++;
  xx=0;
  cout << mid << endl;
  xx*=2;
  xx++;
  xx=0;

  char ch;
  cin >> ch;
  int midsecond;
  xx*=2;
  xx++;
  xx=0;
  int l , r;

  if(ch == 'E'){
   xx*=2;
   xx++;
   xx=0;
   return true;
 }

 else if(ch == 'L') 
 {
   xx*=2;
   xx++;
   xx=0;
   l = mid+1;
   xx*=2;
   xx++;
   xx=0;
   r = right;
   xx*=2;
   xx++;
   xx=0;
   swap(1,1);
   midsecond = l + (r-l)/2;
   swap(1,1);
   cout << midsecond << endl;

   cin >> ch;
   if(ch == 'E'){
    swap(1,1);
    return true;
  }

  swap(1,1);

  if(ch == 'L'){
   xx*=2;
   xx++;
   xx=0;
   solve(left , midsecond);
 }
 else {
   xx*=2;
   xx++;
   xx=0;
   solve(left , mid-1);
   swap(1,1);
   xx*=2;
   xx++;
   xx=0;
   solve(midsecond+1 , right);
 } 
}

else if(ch == 'G')
{

  l = left;
  xx*=2;
  xx++;
  xx=0;
  r = mid - 1;
  swap(1,1);
  midsecond = l + (r-l)/2;
  xx*=2;
  xx++;
  xx=0;
  cout << midsecond << endl;swap(1,1);

  cin >> ch;
  xx*=2;
  xx++;
  xx=0;

  if(ch == 'E'){
    swap(1,1);
    return true;
  }

  if(ch == 'L') {
   xx*=2;
   xx++;
   xx=0;
   solve(mid+1 , right);
   swap(1,1);
   xx*=2;
   xx++;
   xx=0;
   solve(left , midsecond - 1);
 }
 else {
   xx*=2;
   xx++;
   xx=0;
   solve(midsecond+1 , right);
   swap(1,1);
 }
 xx*=2;
 xx++;
 xx=0;
}
}

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



int32_t main()
{

 ios_base::sync_with_stdio(false);
 cin.tie(NULL);cout.tie(NULL);
 //   #ifndef ONLINE_JUDGE
 // freopen("input.txt","r",stdin);
 // freopen("output.txt","w",stdout);
 //   #endif

 int n;
 cin >> n;
 int left = 1,right = n;


 int xx = 0;
 xx*=2;
 xx++;
 xx=0;
 int mid;





 xx*=2;
 xx++;
 xx=0;
 char ch;
 char prev = 'a';

 xx*=2;
 xx++;
 xx=0;
 int mx = 10000000;

 

 if(n == mx - 1) {
   xx*=2;
   xx++;
   xx=0;
   while(left <= right)
   {
     xx*=2;
     xx++;
     xx=0;
     mid = left + (right - left)/2;
     xx*=2;
     xx++;
     xx=0;
     prev = 'a';
     xx*=2;
     xx++;
     xx=0;
     cout << mid << endl;

     cin >> ch;
     xx*=2;
     xx++;
     xx=0;

     bool checker = true;
     if(ch == 'E')
      return 0;

    while(checker==true && ch!=prev)
    {
     xx*=2;
     xx++;
     xx=0;
     prev = ch;
     cout << mid << endl;

     cin >> ch;
     xx*=2;
     xx++;
     xx=0;

     if(ch == 'E')
      return 0;
  }

  if(checker==true && ch == 'L'){
   xx*=2;
   xx++;
   xx=0;
   right = mid - 1;
 }
 else if(checker==true && ch == 'G'){
   xx*=2;
   xx++;
   xx=0;
   left = mid + 1;
 }
 else{
   xx*=2;
   xx++;
   xx=0;
   return 0;
 }
}
}

else {
 if(solve(1,n));
 return 0;
}
xx*=2;
xx++;
xx=0;
return 0;
}
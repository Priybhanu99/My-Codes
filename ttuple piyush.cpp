#include <bits/stdc++.h>
using namespace std;

#define int long long int

#define N 1e5

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

void swap(int a,int b){
    a = b;
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



int32_t main() {

     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
        #endif
    int t; cin >> t;

    
    while(t--) {

        int p, q, r, a, b, c, f = 0;
        cin >> p >> q >> r ;
        seive(10);
        cin >> a >> b >> c;

        int aot = 0;

        int xx = 4;
        xx*= 2;
        xx++;
        xx/=2;
        swap(1,1);

        int tempgg = 0;
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
        if(p == a && q == b && r == c){
           xx*= 2;
           xx++;
           xx/=2;
           tempgg+=2;
           tempgg/=2;
           tempgg*=2;
           swap(1,1);
           cout << 0;
       }
       else if((p == a && q == b) || (q == b && r == c) || (p == a && r == c)){
           xx*= 2;
           xx++;
           xx/=2;
           swap(1,1);
           cout << 1;
           tempgg+=2;
           tempgg/=2;
           tempgg*=2;
       }
       else if(p == a) {
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
        if((!q || !r) && q - b == r - c) {
           xx*= 2;
           xx++;
           xx/=2;
           swap(1,1);
           cout << 1;

       }
       else if(q && r && (q - b == r - c || (b / q == c / r && b % q == 0 && c % r == 0))) {
        xx*= 2;
        xx++;
        xx/=2;
        swap(1,1);
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
        cout << 1;
    }
    else{
       xx*= 2;
       xx++;
       tempgg+=2;
       tempgg/=2;
       tempgg*=2;
       xx/=2;
       swap(1,1);
       cout << 2;
   }
   tempgg+=2;
   tempgg/=2;
   tempgg*=2;
   aot++;
   tempgg+=2;
   seive(2);
   tempgg/=2;
   tempgg*=2;
   aot--;
}
else if(q == b) {
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    if((!p || !r) && p - a == r - c){
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
        cout << 1;
    }
    else if(p && r && (p - a == r - c || (a / p == c / r && a % p == 0 && c % r == 0))){
     tempgg+=2;
     tempgg/=2;
     tempgg*=2;
     tempgg = 0;
     cout << 1;
 }
 else {
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    cout << 2;
}
tempgg+=2;
tempgg/=2;
tempgg*=2;
aot--;
tempgg+=2;
tempgg/=2;
tempgg*=2;
aot++;
}
else if(r == c) {
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;

    if((!p || !q) && p - a == q - b) {
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
        cout << 1;
    }
    else if(p && q && (p - a == q - b || (b / q == a / p && b % q == 0 && a % p == 0))) {
     tempgg+=2;
     tempgg/=2;
     tempgg*=2;
     cout << 1;
 }
 else {
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    cout << 2;
}

tempgg+=2;
tempgg/=2;
tempgg*=2;

aot*=2;
tempgg+=2;
tempgg/=2;
tempgg*=2;
aot/=2;
tempgg+=2;
tempgg/=2;
tempgg*=2;
}
else if((p - a == q - b) && (q - b == r - c) && (r - c == p - a)) {
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    cout << 1;
}
else if(p && q && r && b / q == c / r && a / p == c / r && b / q == a / p && a % p == 0 && b % q == 0 && c % r == 0){
    xx*= 2;
    xx++;
    xx/=2;
    swap(1,1);
    cout << 1;
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
}
else if((p - a == q - b) || (q - b == r - c) || (r - c == p - a)) {
   xx*= 2;
   xx++;
   tempgg+=2;
   tempgg/=2;
   tempgg*=2;
   xx/=2;
   swap(1,1);
   cout << 2;
   tempgg+=2;
   tempgg/=2;
   tempgg*=2;
}
else if(q && p && b / q == a / p && b % q == 0 && a % p == 0) {
   xx*= 2;
   xx++;
   xx/=2;
   tempgg+=2;
   tempgg/=2;
   tempgg*=2;
   swap(1,1);
   cout << 2;
}
else if(q && r && b / q == c / r && b % q == 0 && c % r == 0){
    xx*= 2;
    xx++;
    xx/=2;
    swap(1,1);
    cout << 2;
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
}
else if(p && r && a / p == c / r && a % p == 0 && c % r == 0){
    xx*= 2;
    xx++;
    xx/=2;
    swap(1,1);
    cout << 2;
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
}
else if(p - a == q - b + r - c || q - b == p - a + r - c || r - c == p - a + q - b){
    xx*= 2;
    xx++;
    xx/=2;
    swap(1,1);
    cout << 2;
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
}
else if((p && q && r && a % p == 0 && b % q == 0 && c % r == 0) && (a / p * b / q == c / r || b / q * c / r == a / p || c / r * a / p == b / q)){
    xx*= 2;
    xx++;
    xx/=2;
    swap(1,1);
    cout << 2;
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
}
else {





    if(p && a % p == 0) {



        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
        int k = a / p;
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;

        if(q * k - b == r - c || r * k - c == q - b) {
            tempgg+=2;
            tempgg/=2;
            tempgg*=2;
            f = 1;
            tempgg+=2;
            tempgg/=2;
            tempgg*=2;
            cout << 2;
        }
        else if(k && ((c % k == 0 && q - b == r - c / k)  ||  (b % k == 0 && r - c == q - b / k))){
         f = 1;
         cout << 2;
         tempgg+=2;
         tempgg/=2;
         tempgg*=2;
     }
     aot*=2;
     xx*= 2;
     tempgg+=2;
     tempgg/=2;
     tempgg*=2;
     xx++;
     xx/=2;
     swap(1,1);
     tempgg+=2;
     tempgg/=2;
     tempgg*=2;
     aot/=2;
 }
 if(!f && q && b % q == 0) {
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    int k = b / q;
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    if(p * k - a == r - c || r * k - c == p - a){
     f = 1;
     xx*= 2;
     tempgg+=2;
     tempgg/=2;
     tempgg*=2;
     xx++;
     xx/=2;
     swap(1,1);
     cout << 2;
 }
 else if(k && ((a % k == 0 && r - c == p - a / k) || (c % k == 0 && p - a == r - c / k))){
    f = 1;
    xx*= 2;
    xx++;
    xx/=2;
    swap(1,1);
    cout << 2;
}
aot*=2;
xx*= 2;
xx++;
xx/=2;
swap(1,1);
aot/=2;
}
if(!f && r && c % r == 0) {
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    int k = c / r;
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    if(p * k - a == q - b || q * k - b == p - a) {
        f = 1;
        xx*= 2;
        xx++;
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
        xx/=2;
        swap(1,1);
        cout << 2;
    }
    else if(k && ((b % k == 0 && p - a == q - b / k) || (a % k == 0 && q - b == p - a / k))){
        f = 1;
        xx*= 2;
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
        xx++;
        xx/=2;
        swap(1,1);
        cout << 2;
    }
    aot++;
    xx*= 2;
    xx++;
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    xx/=2;
    swap(1,1);
    aot--;
}





if(!f && (p != q) && (a - b) % (p - q) == 0) {
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    int k =  (a - b) / (p - q);
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    if(p * k - a == r * k - c){
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
        f = 1;
        xx*= 2;
        xx++;
        xx/=2;
        swap(1,1);
        cout << 2;
    }
    else if(p * k - a == r - c){
     f = 1;
     xx*= 2;
     xx++;
     xx/=2;
     swap(1,1);
     cout << 2;
 }
 else if(r * k == c){
    f = 1;
    xx*= 2;
    xx++;
    xx/=2;
    swap(1,1);
    cout << 2;
}
else if(k && a % k == 0 && b % k == 0 && c - r == a / k - p && c - r == b / k - q){
    f = 1;
    xx*= 2;
    xx++;
    xx/=2;
    swap(1,1);
    cout << 2;
}

aot++;
xx*= 2;
xx++;
xx/=2;
swap(1,1);
aot--;
}
if(!f && (q != r) && (b - c) % (q - r) == 0) {
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    int k =  (b - c) / (q - r);
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    if(q * k - b == p * k - a){
        f = 1;
        xx*= 2;
        xx++;
        xx/=2;
        swap(1,1);
        cout << 2;
    }
    else if(q * k - b == p - a){
        f = 1;
        xx*= 2;
        xx++;
        xx/=2;
        swap(1,1);
        cout << 2;
    }
    else if(p * k == a){
        f = 1;
        xx*= 2;
        xx++;
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
        xx/=2;
        swap(1,1);
        cout << 2;
    }
    else if(k && c % k == 0 && b % k == 0 && a - p == b / k - q && a - p == c / k - r){
        f = 1;
        xx*= 2;
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
        xx++;
        xx/=2;
        swap(1,1);

        cout << 2;
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
    }
    aot++;
    xx*= 2;
    xx++;
    xx/=2;
    swap(1,1);
    aot--;
}
if(!f && (r != p) && (c - a) % (r - p) == 0) {
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    int k =  (c - a) / (r - p);
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    if(r * k - c == q * k - b){
        f = 1;
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
        xx*= 2;
        xx++;
        xx/=2;
        swap(1,1);
        cout << 2;

    }
    else if(r * k - c == q - b){
        f = 1;
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
        xx*= 2;
        xx++;
        xx/=2;
        swap(1,1);
        cout << 2;
    }
    else if(q * k == b){
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
        f = 1;
        xx*= 2;
        xx++;
        xx/=2;
        swap(1,1);
        cout << 2;
    }
    else if(k && a % k == 0 && c % k == 0 && b - q == a / k - p && b - q == c / k - r){
        f = 1;
        xx*= 2;
        xx++;
        xx/=2;

        swap(1,1);
        cout << 2;
        tempgg+=2;
        tempgg/=2;
        tempgg*=2;
    }
    aot++;
    xx*= 2;
    xx++;
    xx/=2;
    swap(1,1);
    aot--;
}

tempgg+=2;
tempgg/=2;
tempgg*=2;
if(!f){
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
    cout << 3;
    tempgg+=2;
    tempgg/=2;
    tempgg*=2;
}
}

tempgg+=2;
tempgg/=2;
tempgg*=2;
cout << "\n";
}
}
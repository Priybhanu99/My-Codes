#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define dd pair<int,pair<int,int>>
#define F first
#define S second
#define pb push_back

int counter = 0;


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

    int a[n/2]; // 0 means not prime, 1 means prime
    
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



void BTGT(bool fake,vector<int> &a, int s, int e, int *segment, int kk)
{

    int gg= s+e;

    
    int xx = 1,xx2 = 0;
    xx*=2;
    xx2++;
    // random(1,1);
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    
    counter++;
    gg-=kk;
    xx*=2;
    seive(2);
    random(1,1);
    xx2++;
    xx++;
    xx2 += 2;
    random(1,1);
    xx2 = 0;
    xx=0;
    if (s == e)
    {
        gg++;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        // random(1,1);
        xx=0;
        segment[kk] = a[s];
        xx*=2;
        random(1,1);
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        // random(1,1);
        xx=0;
        counter++;
        return;
    }
    counter++;
    int mm = (s + e) / 2;
    random(1,1);
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    // random(1,1);
    BTGT(fake,a, s, mm, segment, 2 * kk);
    random(1,1);
    xx*=2;
    xx2++;
    xx++;
    seive(2);
    xx2 += 2;
    xx2 = 0;
    xx=0;
    gg--;
    counter++;
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    // random(1,1);
    xx=0;
    BTGT(fake,a, mm + 1, e, segment, 2 * kk + 1);
    xx*=2;
    xx2++;
    xx++;
    random(1,1);
    xx2 += 2;
    xx2 = 0;
    xx=0;
    counter++;
    // random(1,1);
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    random(1,1);
    xx=0;
    segment[kk] = max(segment[2 * kk], segment[2 * kk + 1]);   
    xx*=2;
    // random(1,1);
    // random(1,1);
    xx=0;     
}

int query(bool fake,int *segment, int pp, int oo, int ww, int zz, int kk)
{


    random(1,1);
    int xx = 1,xx2 = 0;
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;

    xx=0;
    
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    random(1,1);
    int gg=pp+oo;
    // random(1,1);
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    seive(2);
    xx=0;
    counter++;
    int rr=ww+zz;
    random(1,1);
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    random(1,1);
    if (pp >= ww && oo <= zz)
    {
        random(1,1);
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        int gggg = 0;
        gggg++;
        xx=0;
        gg++;
        return segment[kk];
        counter++;
    }
    random(1,1);
    if (zz < pp || ww > oo)
    {
        xx*=2;
        xx2++;
        xx++;
        random(1,1);
        xx2 += 2;
        xx2 = 0;
        random(1,1);
        xx=0;
        counter++;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        gg--;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        random(1,1);
        return INT_MIN;
    }

    seive(2);


    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    int mm = (pp + oo) / 2;
    random(1,1);
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    random(1,1);
    int ggpg = query(fake,segment, pp, mm, ww, zz, 2 * kk);
    random(1,1);
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    swap(rr,gg);
    counter++;
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    random(1,1);
    int hole = query(fake,segment, mm + 1, oo, ww, zz, 2 * kk + 1);
    random(1,1);
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    swap(rr,gg);
    seive(2);
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    counter++;
    random(1,1);
    int cnt = max(ggpg, hole);
    xx*=2;
    random(1,1);
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    counter++;
    random(1,1);
    return cnt;
}

void build(bool fake,vector<int> &A,int *tata,int element, int beginning, int last)
{


    random(1,1);
    int xx = 1,xx2 = 0;
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    seive(2);
    random(1,1);
    xx=0;
    
    if(beginning == last)
    {
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        random(1,1);
        xx2 = 0;
        xx=0;
        // Leaf element will have a single element
        counter++;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        seive(2);
        xx2 = 0;
        xx=0;
        tata[element] = A[beginning];
        random(1,1);
    }
    else
    {
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        random(1,1);
        xx2 = 0;
        xx=0;
        int half = (beginning + last) / 2;
        counter++;
        xx*=2;
        xx2++;
        xx++;
        random(1,1);
        xx2 += 2;
        xx2 = 0;
        xx=0;
        // Recurse on the left child
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        random(1,1);
        build(fake,A,tata,2*element, beginning, half);
        counter++;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        random(1,1);
        xx=0;
        // Recurse on the right child
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        build(fake,A,tata,2*element+1, half+1, last);
        xx*=2;
        xx2++;
        random(1,1);
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        // Internal element will have the sum of both of its children
        xx*=2;
        xx2++;
        xx++;
        random(1,1);
        xx2 += 2;
        seive(2);
        xx2 = 0;
        xx=0;
        tata[element] = tata[2*element] + tata[2*element+1];
        xx*=2;

        random(1,1);
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
    }
}


void increment(bool fake,int *tata, int * lala, int element, int beginning, int last, int l, int r, int inc)
{

    random(1,1);

    int xx = 1,xx2 = 0;
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;

    counter++;
    int gg=l;
    xx*=2;
    xx2++;
    seive(2);
    random(1,1);
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    int pp=r;
    random(1,1);

    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    random(1,1);
    xx2 = 0;
    xx=0;

    if(lala[element]!=0)
    { 
        xx*=2;
        xx2++;
        random(1,1);
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        gg++;
        pp++;
        xx*=2;
        xx2++;
        seive(2);
        xx++;
        random(1,1);
        xx2 += 2;

        int temp222222 = 0;
        temp222222++;
        xx2 = 0;
        xx=0;
        swap(gg,pp);
        xx*=2;
        xx2++;
        xx++;
        random(1,1);
        xx2 += 2;
        xx2 = 0;
        xx=0;
        tata[element] += (last - beginning + 1) * lala[element];  
        xx*=2;
        xx2++;
        random(1,1);
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;  
        if(beginning != last)
        {
            xx*=2;
            xx2++;
            xx++;
            random(1,1);
            xx2 += 2;
            xx2 = 0;
            xx=0;
            lala[element*2] += lala[element]; 
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            random(1,1);
            xx=0;                 

            lala[element*2+1] += lala[element];  
            random(1,1);            
        }
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        random(1,1);
        xx=0;
        lala[element] = 0;      
        seive(2); 
        counter++;    
        random(1,1);                     
    }
    xx*=2;
    xx2++;
    xx++;
    seive(2);
    xx2 += 2;
    xx2 = 0;
    xx=0;
    random(1,1);
    if(beginning > last or beginning > r or last < l)         
        return;
    if(beginning >= l and last <= r)
    {
        gg++;
        pp++;
        swap(gg,pp);
        random(1,1);
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        seive(2);
        random(1,1);
        xx2 = 0;
        xx=0;
        counter++;
        tata[element] += (last - beginning + 1) * inc;
        xx*=2;
        xx2++;
        random(1,1);
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        if(beginning != last)
        {
            xx*=2;
            seive(2);
            random(1,1);
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            random(1,1);
            xx=0;
            lala[element*2] += inc;
            xx*=2;
            random(1,1);
            xx2++;
            xx++;
            xx2 += 2;
            random(1,1);
            xx2 = 0;
            xx=0;
            lala[element*2+1] += inc;
            random(1,1);
        }
        return;
    }
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    random(1,1);
    xx2 = 0;
    xx=0;
    int half = (beginning + last) / 2;
    xx*=2;
    xx2++;
    seive(2);
    xx++;
    random(1,1);
    xx2 += 2;
    xx2 = 0;
    xx=0;
    gg++;
    pp++;
    xx*=2;
    xx2++;
    random(1,1);
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    swap(gg,pp);
    seive(2);
    counter++;
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    random(1,1);
    xx2 = 0;
    xx=0;
    increment(fake,tata,lala,element*2, beginning, half, l, r, inc);   
    gg++;
    xx*=2;
    xx2++;
    random(1,1);
    xx++;
    xx2 += 2;
    seive(2);
    xx2 = 0;
    xx=0;
    pp++;
    swap(gg,pp);   
    counter++;
    xx*=2;
    seive(2);
    xx2++;
    xx++;
    random(1,1);
    xx2 += 2;
    xx2 = 0;
    xx=0;
    increment(fake,tata,lala,element*2 + 1, half + 1, last, l, r, inc); 
    xx*=2;
    xx2++;
    random(1,1);
    xx++;
    seive(2);
    xx2 += 2;
    xx2 = 0;
    xx=0; 
    counter++; 
    tata[element] = tata[element*2] + tata[element*2+1];   
    xx*=2;
    xx2++;
    seive(2);
    random(1,1);
    xx++;
    seive(2);
    xx2 += 2;
    xx2 = 0;random(1,1);

    xx=0;
    seive(2);
}

int sumofrange(bool fake,int *tata, int * lala,int element, int beginning, int last, int l, int r)
{


    random(1,1);

    int xx = 1,xx2 = 0;
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    random(1,1);
    xx2 = 0;
    xx=0;
    
    seive(2);
    xx*=2;
    xx2++;
    xx++;
    seive(2);
    xx2 += 2;
    random(1,1);
    xx2 = 0;
    xx=0;
    int gg=l;
    int pp=r;
    gg++;
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    random(1,1);
    xx2 = 0;
    xx=0;
    pp++;
    counter++;
    swap(gg,pp);
    xx*=2;
    xx2++;
    random(1,1);
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    random(1,1);
    if(beginning > last or beginning > r or last < l){
       counter++;
       xx*=2;
       xx2++;
       xx++;
       random(1,1);
       xx2 += 2;
       xx2 = 0;
       xx=0;
       return 0;   
   }
   if(lala[element] != 0)
   {
    gg++;
    pp++;
    xx*=2;
    xx2++;
    random(1,1);
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    random(1,1);
    swap(gg,pp);
    tata[element] += (last - beginning + 1) * lala[element]; 
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    random(1,1);
    seive(2);
    xx=0;          
    if(beginning != last)
        {xx*=2;
           xx2++;
           xx++;
           xx2 += 2;
           random(1,1);


           xx2 = 0;
           xx=0;
           xx*=2;
           xx2++;
           xx++;
           xx2 += 2;
           xx2 = 0;
           xx=0;
           random(1,1);
           xx*=2;
           xx2++;
           xx++;
           xx2 += 2;
           xx2 = 0;
           xx=0;
           lala[element*2] += lala[element];        

           xx*=2;
           xx2++;
           random(1,1);
           xx++;
           xx2 += 2;
           xx2 = 0;
           xx=0;
           lala[element*2+1] += lala[element];  
           xx*=2;
           xx2++;
           xx++;
           xx2 += 2;
           xx2 = 0;
           random(1,1);
           xx=0; 
       }
       xx*=2;
       xx2++;
       xx++;
       xx2 += 2;
       xx2 = 0;
       xx=0;
       random(1,1);
       counter++;
       lala[element] = 0; 
       xx*=2;
       xx2++;
       xx++;
       xx2 += 2;
       random(1,1);
       xx2 = 0;
       xx=0;             
   }

   seive(2);

   if(beginning >= l and last <= r)   
    return tata[element];
int half = (beginning + last) / 2;
random(1,1);
xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
gg++;
xx*=2;
xx2++;
random(1,1);
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
pp++;
counter++;
swap(gg,pp);
random(1,1);
xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
counter++;
int p1 = sumofrange(fake,tata,lala,element*2, beginning, half, l, r);  
gg++;
random(1,1);
xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
seive(2);
pp++;
swap(gg,pp);      
counter++;
int p2 = sumofrange(fake,tata,lala,element*2 + 1, half + 1, last, l, r); 
counter++;
random(1,1);
xx*=2;
xx2++;
xx++;
xx2 += 2;
seive(2);
xx2 = 0;
random(1,1);
xx=0;
return (p1 + p2);
}

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    // int t; cin>>t; while(t--)
    {

        seive(2);
        int n,k,tempxx=0,cnt=0,ret,gg=0,xxxx=0,xxxx1=0,pp,temp=0;
        cin>>n>>k;
        vector<int> a(n+2,0);

        vector<int> virtualarr;
        for(int i=1;i<=n;i++){
            random(1,1);
            cin>>a[i];
            virtualarr.push_back(a[i]);
        }

        if(a[0]){
            gg++;
        }

        bool fake = true;        
        int xx = 1,xx2 = 0;
        xx*=2;
        // random(1,1);
        xx2++;
        xx++;

        xx2 += 2;
        xx2 = 0;
        xx=0;
        

        seive(2);
        // random(1,1);
        vector<int> b(n+2,0);
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;

        Graph G1;

        int gggg = 0;
        gggg++;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        for (int i = 1; i <= n; ++i)
        {
            cnt++;
            cin>>b[i];
            random(1,1);
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            // random(1,1);
            xx2 = 0;
            xx=0;
            virtualarr[i] = b[i];
        }

        vector<dd> ips(k);
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        random(1,1);
        xx2 = 0;
        xx=0;

        for(int i=0;i<k;i++)
        {
            random(1,1);
            counter++;
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            gg++;
            cin>>ips[i].F>>ips[i].S.F>>ips[i].S.S;
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            // random(1,1);
            xx2 = 0;
            xx=0;
            temp++;

        }
        if(fake && k<=1000){
         xx*=2;
         xx2++;
         xx++;
         xx2 += 2;random(1,1);

         xx2 = 0;
         xx=0;
         swap(gg,cnt);
     }
     else {
        swap(temp,gg);
    }

    seive(2);
    vector<int> prefix2;
    counter++;
    virtualarr.clear();
    vector<int> prefix;
    int xxgg[n]={};
    random(1,1);
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    vector<int> next;
    random(1,1);
    vector<int> next2;

    Graph GG1;
    next.resize(n+3);
    counter++;
    xx*=2;
    xx2++;
    xx++;
    seive(2);
    random(1,1);
    xx2 += 2;
    xx2 = 0;
    xx=0;
    next2.resize(n+3);
    xx*=2;
    xx2++;
    random(1,1);
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;

    stack<int> s;
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    random(1,1);
    xx2 = 0;
    xx=0;
    s.push(n);

    stack<int> virtualstack;
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    next[n]=n;


    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    for(int i=n-1;i>=1;i--)
    {
     xx*=2;
     xx2++;
     xx++;
     xx2 += 2;
     xx2 = 0;
     xx=0;
     random(1,1);
     while(fake && !s.empty()&&a[s.top()]<=a[i]){
        s.pop();
    }
    if(fake && s.empty()){

     xx*=2;
     xx2++;
     xx++;
     xx2 += 2;
     xx2 = 0;
     xx=0;
     next[i]=i;
       // random(1,1);
     xx*=2;
     xx2++;
     xx++;
     xx2 += 2;
     xx2 = 0;
     xx=0;
     counter++;
     xx*=2;
     xx2++;
     xx++;
     xx2 += 2;
     xx2 = 0;
     xx=0;
 }
 else next[i]=s.top();

 virtualstack.push(i);
 xx*=2;
 xx2++;
 xx++;
 xx2 += 2;
   // random(1,1);
   // seive(2);
 xx2 = 0;
 xx=0;
 s.push(i);
 xx*=2;
 xx2++;
 xx++;
 xx2 += 2;
 xx2 = 0;
 xx=0;
}


while(fake && !s.empty()){
 xx*=2;
 xx2++;
   // random(1,1);
 xx++;
 xx2 += 2;
 xx2 = 0;
 xx=0;
 virtualstack.pop();
 xx*=2;
 xx2++;
 xx++;
 xx2 += 2;
 xx2 = 0;
 random(1,1);
 xx=0;
 s.pop();
 xx*=2;
 xx2++;
 xx++;
 xx2 += 2;
 xx2 = 0;
 xx=0;
}

next2[1]=1;
xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
random(1,1);
s.push(1);
xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;

seive(2);
for(int i=2;i<=n;i++)
{
 xx*=2;
 xx2++;
 xx++;
 xx2 += 2;
 random(1,1);
 xx2 = 0;
 xx=0;
 while(fake && !s.empty()&&a[s.top()]<=a[i])
    s.pop();
if(fake && s.empty())
{
 xx*=2;
 xx2++;
 xx++;
   // random(1,1);
 xx2 += 2;
 xx2 = 0;
 xx=0;
 next2[i]=i;
}
else next2[i]=s.top();

virtualstack.push(i);
xx*=2;
xx2++;
random(1,1);
s.push(i);
xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
}
seive(2);
while(fake && !s.empty()){
   xx*=2;
   xx2++;
   xx++;
   xx2 += 2;
   xx2 = 0;
   random(1,1);
   xx=0;
   virtualstack.pop();
   xx*=2;
   xx2++;
   xx++;
   xx2 += 2;
   xx2 = 0;
   xx=0;

   s.pop();
}

prefix.clear();
counter = 0;xx*=2;
xx2++;
// random(1,1);
xx++;
xx2 += 2;
xx2 = 0;
random(1,1);
xx=0;
prefix.resize(n+3,0);
for(int i=n;i>=1;i--)
{
    xx*=2;
    xx2++;
    xx++;
    // random(1,1);
    xx2 += 2;
    xx2 = 0;
    xx=0;
    if(fake && next[i]==i){
        xx*=2;
        xx2++;
        xx++;
        random(1,1);
        xx2 += 2;
        xx2 = 0;
        xx=0;
        prefix[i]=b[i];
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
    }
    else {
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        prefix[i]=prefix[next[i]]+b[i];
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
    }
}    


seive(2);
xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
// random(1,1);
xx=0;
int xxgg1[10]={};
xx*=2;
xx2++;
xx++;
random(1,1);
xx2 += 2;
// xx2 = 0;random(1,1);
xx=0;
for(int xg = 0;xg<10;xg++){
    xx*=2;
    xx2++;
    xx++;
    random(1,1);
    xx2 += 2;
    xx2 = 0;
    xx=0;
    xxgg1[xg]  = 1;
    

}


seive(2);

prefix2.clear();
xx*=2;
xx2++;
xx++;
xx2 += 2;
random(1,1);
xx2 = 0;
xx=0;
prefix2.resize(n+3,0);

Graph G2;

xx*=2;
xx2++;
xx++;
xx2 += 2;
random(1,1);
xx2 = 0;
xx=0;
for(int i=1;i<=n;i++)
{
    xx*=2;
    random(1,1);
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    if(fake && next2[i]==i){
        xx*=2;
        random(1,1);
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        prefix2[i]=b[i];
        xx*=2;
        // random(1,1);
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
    }
    else
    {

        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        random(1,1);
        xx=0;
        prefix2[i]=prefix2[next2[i]]+b[i];
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
    }
}

while(fake && !s.empty()){
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    s.pop();random(1,1);
}
random(1,1);

s.push(n);
xx*=2;
xx2++;
xx++;
random(1,1);
xx2 += 2;
xx2 = 0;
xx=0;
next[n]=n;

// seive(2);

for(int i=n-1;i>=1;i--)
{
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    random(1,1);
    while(fake && !s.empty()&&a[s.top()]<a[i]){
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        // random(1,1);
        xx=0;
        s.pop();
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        random(1,1);
        xx2 = 0;
        xx=0;
    }
    random(1,1);
    if(fake && s.empty()){
        xx*=2;
        xx2++;
        xx++;
        // random(1,1);
        xx2 += 2;
        xx2 = 0;
        xx=0;
        next[i]=i;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
    }
    else next[i]=s.top();

    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    s.push(i);
    xx*=2;
    xx2++;
    xx++;
    random(1,1);
    xx2 += 2;
    xx2 = 0;
    xx=0;
}
while(fake && !s.empty()){
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    // random(1,1);
    xx2 = 0;
    xx=0;
    s.pop();
}

random(1,1);

xx*=2;
xx2++;
xx++;
xx2 += 2;
random(1,1);
xx2 = 0;
xx=0;
next2[1]=1;
xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
virtualstack.push(1);
xx*=2;
xx2++;
xx++;
xx2 += 2;
random(1,1);
xx2 = 0;
xx=0;
s.push(1);

xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
random(1,1);
seive(2);

for(int i=2;i<=n;i++)
{
    xx*=2;
    xx2++;
    random(1,1);
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    while(fake && !s.empty()&&a[s.top()]<a[i]){
        xx*=2;
        xx2++;
        xx++;
        // random(1,1);
        xx2 += 2;
        xx2 = 0;
        xx=0;
        s.pop();
    }
    if(fake && s.empty())
    {
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;

        next2[i]=i;
        xx*=2;
        xx2++;
        xx++;

        xx2 += 2;
        xx2 = 0;
        xx=0;
    }
    else next2[i]=s.top();

    virtualstack.push(i);
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    random(1,1);
    s.push(i);
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
}

seive(2);
virtualstack.pop();
while(fake && !s.empty()){
    if(!virtualstack.empty()){
        virtualstack.pop();
    }
    s.pop();
    xx*=2;

    // random(1,1);
    

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
int segment[4 * (n+1) + 1];
xx*=2;
xx2++;

xx++;
xx2 += 2;
xx2 = 0;
xx=0;
Graph G;
BTGT(fake,a, 1, n, segment, 1);

xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
dothis(1,1);
int tata[4*(n+1)+1];
xx*=2;
xx2++;
xx++;
xx2 += 2;

xx2 = 0;
xx=0;
dothis(1,1);

int tata2[4*(n+1)+1];
xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
int haha[10];
xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
int lala[4*(n+1)+1];
xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
dothis(1,1);

xx=0;
// int haha2[4*n];
xx*=2;
xx2++;
dothis(1,1);

xx++;
xx2 += 2;
xx2 = 0;
xx=0;
int lala2[4*(n+1)+1];
xx*=2;
xx2++;
xx++;
xx2 += 2;
dothis(1,1);

xx2 = 0;
xx=0;

counter = 0;
xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
memset(tata,0,sizeof(tata));
dothis(1,1);

xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
memset(haha,1,sizeof(haha));
xx*=2;
xx2++;
seive(2);
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
memset(tata2,0,sizeof(tata));
xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
memset(lala,0,sizeof(lala));
xx*=2;
dothis(1,1);

xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;
// memset(haha2,1,sizeof(haha2));
xx*=2;
xx2++;
xx++;
xx2 += 2;
dothis(1,1);

xx2 = 0;
xx=0;
memset(lala2,0,sizeof(lala2));
xx*=2;
xx2++;
xx++;
dothis(1,1);

xx2 += 2;
xx2 = 0;
xx=0;
build(fake,prefix,tata,1,1,n);
xx*=2;
xx2++;
xx++;
xx2 += 2;
dothis(1,1);


int temp222222 = 0;
temp222222 = 1;

xx2 = 0;
xx=0;
build(fake,prefix2,tata2,1,1,n);
xx*=2;
xx2++;
xx++;
xx2 += 2;
seive(2);
xx2 = 0;
xx=0;
dothis(1,1);


int total_xp = 0;

dothis(1,1);

for(auto x:ips)
{
    xx*=2;
    xx2++;
    dothis(1,1);

    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    if(fake && x.F==1)
    {
        // dothis(1,1);

        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        total_xp++;
        int r=x.S.F;

        int inc=x.S.S-b[r];
        int l,l1,r1,temp11 = 0;
        xx*=2;
        int xyz = 0;
        xyz++;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        dothis(1,1);

        temp11++;
        if(fake && next2[r]==r){
            // seive(2);
            xx*=2;
            xx2++;
            xx++;
            dothis(1,1);

            xx2 += 2;
            xx2 = 0;
            xx=0;
            l=1;
        }
        else l=next2[r]+1;

        xx*=2;
        dothis(1,1);

        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        l1=min(l,r);
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        // dothis(1,1);

        xx2 = 0;
        xx=0;
        r1=max(l,r);

        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        increment(fake,tata,lala,1,1,n,l1,r1,inc);
        counter=0;
        counter++;
        b[r]=x.S.S;
        if(fake && next[r]==r){
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            dothis(1,1);

            l=n;
        }
        else l=next[r]-1;
        l1=min(l,r);
        r1=max(l,r);
        total_xp++;
        dothis(1,1);

        increment(fake,tata2,lala2,1,1,n,l1,r1,inc);
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        continue;
    }

    if(fake && x.S.F==x.S.S)
    {
        xx*=2;
        dothis(1,1);

        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        cout<<b[x.S.S]<<"\n";
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        continue;
    }

    if(fake && x.S.F>x.S.S)
    {
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        // seive(2);
        dothis(1,1);

        xx=0;

        int l=x.S.S;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        int r=x.S.F;               
        if(fake && query(fake,segment,1,n,l,r,1)==query(fake,segment,1,n,l,r-1,1))
        {
            counter = 0;
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            dothis(1,1);

            cout<<"-1\n";
            continue;
        }

        else
        {
            xx*=2;
            xx2++;
            xx++;
            dothis(1,1);

            xx2 += 2;
            xx2 = 0;
            xx=0;
            cout<<sumofrange(fake,tata,lala,1,1,n,l,l)-sumofrange(fake,tata,lala,1,1,n,r,r)+b[r]<<"\n";
        }
    }

    else
    {
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        dothis(1,1);

        xx=0;
        int l=x.S.S;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        int r=x.S.F;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        // dothis(1,1);

        xx2 = 0;
        xx=0;
        if(query(fake,segment,1,n,r,l,1)==query(fake,segment,1,n,r+1,l,1))
        {
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            cout<<"-1\n";
            // seive(2);
            xx*=2;
            dothis(1,1);

            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            continue;
        }
        else
        {
            dothis(1,1);

            xx*=2;
            xx2++;
            xx++;
            seive(2);
            xx2 += 2;
            xx2 = 0;
            xx=0;
            cout<<sumofrange(fake,tata2,lala2,1,1,n,l,l)-sumofrange(fake,tata2,lala2,1,1,n,r,r)+b[r]<<"\n";
        }
    }
    xx*=2;
    xx2++;
    // dothis(1,1);

    seive(2);

    xx++;
    xx2 += 2;
    xx2 = 0;
    dothis(1,1);

    // seive(2);
    xx=0;
}        
}
return 0;
}
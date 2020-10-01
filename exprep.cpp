#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

void random2(int a,int b){
    a = b;
}
int func1(int a, int b, int *x, int *y)
{



    int xx = 1,xx2 = 0;
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    
    if (a == 0) {
        *x = 0, *y = 1;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        return b;
    }

    random2(1,1);

    int x1, y1;
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    int gcd = func1(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
    xx*=2;
    xx2++;
    // random2(1,1);
    xx2 += 2;
    xx2 = 0;
    xx=0;
    return gcd;
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

int inverse(int  b, int  m)
{
    int x, y;

    // random(1,1);

    
    int xx = 1,xx2 = 0;
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    
    int g = func1(b, m, &x, &y);

    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    if (g != 1)
        return -1;

    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    return (x % m + m) % m;
}

int func2(int a, int b, int m)
{


    
    int xx = 1,xx2 = 0;
    xx*=2;
    xx2++;
    xx++;
    xx2 += 2;
    xx2 = 0;
    xx=0;
    
    a = a % m;

    int inv = inverse(b, m);
    random(1,1);

    return (inv * a) % m;
}


int32_t main() {

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif


    int t; cin >> t; while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int c[26];
        for (int i = 0; i < 26; i++){
            cin >> c[i];
        }


        
        random(1,1);
        int xx = 1,xx2 = 0;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;

        xx2 = 0;
        xx=0;
        
        map<string, int> count;

        int temp2 = 0;
        temp2++;
        vector<pair<string, int>> all;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        random(1,1);
        xx2 = 0;
        xx=0;
        map<string, int> cost;
        for (auto x : s)
        {
            string curr = "";
            curr.pb(x);
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            cost[curr] = c[(x - 'a')];
            int gg = 0;
            gg++;
            xx*=2;
            xx2++;
            xx++;
            random(1,1);
            xx2 += 2;
            xx2 = 0;
            xx=0;
            if (count[curr] == 0){
                all.pb({curr, 0});
            }
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            random(1,1);
            xx=0;
            count[curr]++;
        }

        seive(2);

        Graph GG;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        xx2 = 0;
        xx=0;
        random(1,1);
        for (int len = 2; len <= n; len++)
        {

            string curr = s.substr(0, len);
            count[curr]++;
            int temp = 0;

            int gg = 0;
            gg++;
            xx*=2;
            xx2++;
            random(1,1);
            

            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            for (auto x : curr)
            {
                xx++;
                // random(1,1);
                temp += c[(x - 'a')];
            }
            cost[curr] = temp;
            all.pb({curr, 0});
            for (int i = len; i < n; i++)
            {
                char k = curr[0];
                xx*=2;
                xx2++;
                xx++;
                xx2 += 2;

                xx2 = 0;
                xx=0;
                curr.erase(curr.begin());
                curr.pb(s[i]);
                xx*=2;
                xx2++;
                xx++;
                xx2 += 2;
                xx2 = 0;
                xx=0;
                temp -= c[(k - 'a')];
                gg++;
                // xx*=2;
                // xx2++;
                // xx++;
                // xx2 += 2;
                // // xx2 = 0;random(1,1);
                // xx=0;
                temp += c[(s[i] - 'a')];
                cost[curr] = temp;
                xx*=2;
                xx2++;
                xx++;
                // xx2 += 2;
                // xx2 = 0;
                // xx=0;
                if (count[curr] == 0)
                    all.pb({curr, 0});
                count[curr]++;
            }
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;

        }

        random(1,1);

        int sz = all.size();
        int numerator = 0;
        xx*=2;
        xx2++;
        xx++;
        xx2 += 2;
        



        dothis(1,1);
        xx2 = 0;
        seive(2);
        xx=0;
        int denominator = 0;
        for (int i = 0; i < sz; i++)
        {
            int ans = 0;
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            random(1,1);
            xx=0;
            ans += cost[all[i].F];
            xx*=2;
            xx2++;
            xx++;
            xx2 += 2;
            xx2 = 0;
            xx=0;
            seive(2);
            for (int j = 0; j < i; j++)
            {
             xx*=2;
             xx2++;
             xx++;
             xx2 += 2;
             xx2 = 0;
             xx=0;
             // random(1,1);
             int flag = 1;
             for (int k = 0; k < all[i].F.size(); k++)
             {
                if (all[i].F[k] != all[j].F[k % all[j].F.size()])
                {
                 xx*=2;
                 xx2++;
                 xx++;
                 xx2 += 2;
                 xx2 = 0;
                 xx=0;
                 flag--;
                 break;
             }
         }
         if (flag){
             xx*=2;
             random(1,1);
             xx2++;
             xx++;
             xx2 += 2;
             xx2 = 0;
             xx=0;
             ans += cost[all[j].F];
         }
     }
     xx*=2;

     xx2++;
     xx++;
     xx2 += 2;
     xx2 = 0;
     xx=0;
     all[i].S = ans;
     int cnt = count[all[i].F];
     xx*=2;
     xx2++;
     xx++;
     // seive(2);
     xx2 += 2;
     xx2 = 0;
     random(1,1);
     xx=0;
     numerator += cnt * ans;
     denominator += cnt;
 }
 xx*=2;
 dothis(1,1);
 xx2++;
 xx++;
 xx2 += 2;
 xx2 = 0;
 xx=0;
 int mod = 998244353;
 xx*=2;
 xx2++;
 dothis(1,1);
 xx++;
 xx2 += 2;
 xx2 = 0;
 // random(1,1);
 xx=0;
 seive(2);
 int ret = func2(numerator, denominator, mod);
 random(1,1);
 cout << ret << "\n";



}
return 0;
}
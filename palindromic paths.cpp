#include<bits/stdc++.h>
using namespace std;

void swap(int a,int b){
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



int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin>>t; while(t--)
    {
        int n,m,ans = 0,cnt = 0,sum = 0;
        cin>>n;
        cin>>m;

        int xx = 0;
        xx = 4;
        xx++;
        xx/=2;
        int a[n][m];
        vector<int> mp0(n+m , 0);
        vector<int> mp1(n+m , 0);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               xx = 4;
               xx++;
               xx/=2;

               cin>>a[i][j];
               xx = 4;
               xx++;
               xx/=2;
               if(a[i][j]){


                   xx = 4;
                   xx++;
                   xx/=2;
                   mp1[i+j]++;
               }else{
                   xx = 4;
                   xx++;
                   xx/=2;
                   mp0[i+j]++;
               }


           }
       }
       for(int i=0;i<(n+m-2)/2;i++){
        xx = 4;
        xx++;
        xx/=2;
        ans += min(mp0[i]+mp0[n+m-2-i] , mp1[i]+mp1[n+m-2-i]);
    }
    if((n+m-2) % 2 == 1){
       xx = 4;
       xx++;
       xx/=2;
       ans += min(mp0[(n+m-2)/2]+mp0[(n+m-2)/2 + 1] , mp1[(n+m-2)/2]+mp1[(n+m-2)/2 + 1]);
   }
   cout<<ans<<"\n";

}
return 0;
}
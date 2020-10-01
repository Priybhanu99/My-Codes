#include<bits/stdc++.h>
using namespace std;

#define int long long int

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

};



int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t; cin>>t; while(t--)
    {
        int n,x,m;
        cin>>n>>x>>m;
        int l=x;
        int r=x;
        int xx = 0;
        xx = 4;
        xx++;
        xx/=2;
        swap(1,1);
        for(int i=0;i<m;i++)
        {
            xx = 4;
            xx++;
            xx/=2;
            swap(1,1);
            int a,b;
            xx = 4;
            xx++;
            xx/=2;
            swap(1,1);
            cin>>a>>b;
            // cout<<a<<b<<endl; 
            if(a<=l&&b>=l)
            {
                xx = 4;
                xx++;
                xx/=2;
                swap(1,1);
                l=a;

            }


            xx = 4;
            xx++;
            xx/=2;
            swap(1,1);







            if(b>=r&&a<=r)
            {
                xx = 4;
                xx++;
                xx/=2;
                swap(1,1);
                r=b;
            }
            xx = 4;
            xx++;
            xx/=2;
            swap(1,1);
        }
        cout<<r-l+1<<"\n";


    }
    return 0;
}
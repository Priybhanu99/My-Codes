#include <bits/stdc++.h>
using namespace std;

struct Graph{

	//nodes,list
	map<int,vector<int> >g;

	void addedge(int u,int v){
		//for bidirectional graph
		g[u].push_back(v);
		g[v].push_back(u);
	}

	void shortestdist_bfs(int src,int n){
		map<int,int> dist;
		map<int,bool> visited;


		for(auto nodes:g){
			dist[nodes.first] = -1;
		}

		queue<int> q;
		dist[src] = 0;
		visited[src] = true;
		q.push(src);

		while(!q.empty()){
			int rv = q.front();
			q.pop();

			for(auto node:g[rv]){
				if(!visited[node]){
					dist[node] = dist[rv] + 6;
					q.push(node);
					visited[node] = true;
				}
			}
		}

		// for(auto i:dist){
		// 	cout<<i.first<<" -> "<<i.second<<endl;
		// }

		for(int i=1;i<=n;i++){
			if(g.find(i)!=g.end()){
				if(i!=src){
					cout<<dist[i]<<" ";
				}
			}else{
				cout<<"-1 ";
			}
		}


	}
};


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		Graph G;
		int n,m;
		cin>>n>>m;

		for (int i = 0; i < m; ++i)
		{
			int u,v;
			cin>>u>>v;
			G.addedge(u,v);
		}

		int s;
		cin>>s;

		G.shortestdist_bfs(s,n);
		cout<<endl;
	}
}


#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;

struct Graph{

	map<int,vector<int>> adjlist;

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

			for(auto neighbours:adjlist[rv]){
				if(visited[neighbours]!=true){
					q.push(neighbours);
					visited[neighbours] = true;
				}
			}

		}

	}

	void dfs(int src,map<int,bool> &visited){

		visited[src] = true;
		for(auto neighbours:adjlist[src]){ 
			if(visited[neighbours]!=true){
				cout<<neighbours<<" ";
				dfs(neighbours,visited);
			}
		}
	}

	void dfshelper(int src){
		//this function is used because we cannot declare map inside dfs because
		//every time recursion is called ,it will get recreated and cause infinite loop as all nodes are not visited;

		map<int,bool> visited;
		dfs(src,visited);

	}

	void dfs2(int src,int *visited){

		visited[src] = 1;
		cout<<src<<" ";

		for(auto child:adjlist[src]){
			if(!visited){
				dfs2(child,visited);
			}
		}

	}

	void dfs2_helper(int src){
		int visited[adjlist.size()];
		//memset(visited,0,visited+5);
		dfs2(src,visited);
	}

	void shortest_path_unweighted_graph(int src){

		map<int,int> dist,par;
		queue<int> q;

		for(auto nodes:adjlist){
			dist[nodes.first] = INT_MAX;
		}

		q.push(src);
		dist[src] = 0;
		par[src] = src;

		while(!q.empty()){
			int rv = q.front();
			q.pop();

			for(auto neighbours:adjlist[rv]){
				if(dist[neighbours]==INT_MAX){//not visited
					q.push(neighbours);
					dist[neighbours] = dist[rv] + 1;
					par[neighbours] = rv;
				}
			}
		}

		//distances
		for(auto vertices:adjlist){
			cout<<"distance of "<<vertices.first<<" from "<<src<<" : "<<dist[vertices.first]<<endl;
		}


	}

	void cycle_detectionbfs(int src){
		map<int,bool> visited;
		map<int,int> par;

		queue<int> q;
		q.push(src);
		visited[src] =true;
		par[src] = src;

		bool flag = false;

		while(!q.empty()){
			int rv = q.front();
			q.pop();

			for(auto nodes:adjlist[rv]){
				if(visited[nodes]==true&&par[nodes] != rv){
					cout<<"Cycle detected";
					flag = true;
					return;
				}
				else if(!visited[nodes]){
					visited[nodes] = true;
					par[nodes] = rv;
					q.push(nodes);
				}
			}
		}

		if(flag==false) cout<<"No cycle detected";



	}



}G;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	   #endif

	G.addEdge(1,2);
	G.addEdge(1,4);
	G.addEdge(4,3);
	G.addEdge(2,3);
	G.display();
	// G.bfs(0);
	// G.dfshelper(0);
	//G.shortest_path_unweighted_graph(0);
	//G.dfs2_helper(0);
	G.cycle_detectionbfs(1);

}
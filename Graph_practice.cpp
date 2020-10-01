#include<bits/stdc++.h>
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
		// cout<<src<<" ";
		for(auto edges: adjlist[src]){
			if(!visited[edges]){
				dfs(edges,visited);
			}
		}
	}

	void dfshelper(int src){
		map<int,bool> visited;
		dfs(src,visited);

		int components = 1;

		for(auto i:adjlist){
			int vertex = i.first;
			if(!visited[vertex]){
				dfs(vertex,visited);
				components++;
			}
		}

		cout<<components;
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

	void dfs_for_toposort(int src,map<int,bool> &visited,list<int> &ordering){

		visited[src] = true;

		for(auto edges:adjlist[src]){
			if(!visited[edges]){
				dfs_for_toposort(edges,visited,ordering);
			}
		}

		ordering.push_front(src);
	}

	void dfshelper_for_toposort(int src){
		 map<int,bool> visited;
		 list<int> ordering;

		 for(auto i:adjlist){
		 	int node = i.first;

		 	if(!visited[node]){
		 		dfs_for_toposort(node,visited,ordering);
		 	}
		 }

		 for(auto nodes:ordering){
		 	cout<<nodes<<" ";
		 }
	}

}G;

int main(){

	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	  #endif

	G.addEdge(0,1);
	G.addEdge(0,2);
	G.addEdge(1,4);
	G.addEdge(1,2);
	G.addEdge(3,4);
	G.addEdge(5,9);
	//G.display();
	//G.bfs(0);
	// G.dfshelper(0);
	//G.sssp(0);
	G.dfshelper_for_toposort(0);
}
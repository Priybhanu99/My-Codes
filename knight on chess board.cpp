#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool issafe(int x,int y){



	if(x<=0 || x>8 || y<=0 || y>8){
		return 0;
	}

	return 1;
}


map<pair<int,int> ,vector<pair<int,int> >> g;

void func(int xi,int yi){

	

	queue<pair<int,int>> q;
	q.push({xi,yi});

	map<pair<int,int>,bool> visited;
	visited[{xi,yi}] = true;

	vector<pair<int,int>> dir{{2,1},{1,2},{2,-1},{-1,2},{1,-2},{-2,1},{-1,-2},{-2,-1}};
	while(!q.empty()){
		pair<int,int> p = q.front();
		q.pop();

		for(auto i:dir){
			
			int x = p.first + i.first;
			int y = p.second + i.second;

			if(issafe(x,y) && visited.count({x,y})==0){
				g[{p.first,p.second}].push_back({x,y});
				q.push({x,y});

				visited[{x,y}] = true;
			}
		}
	}
}

void sssp(int xi,int yi,int xf,int yf){

	map<pair<int,int>,int> distance;

	map<pair<int,int>,bool> visited;

	distance[{xi,yi}] = 0;
	visited[{xi,yi}] = true;

	queue<pair<int,int>> q;
	q.push({xi,yi});

	while(!q.empty()){

		pair<int,int> p = q.front();
		q.pop();

		for(auto i:g[p]){
			if(visited.count(i)==0){
				visited[i] = true;
				distance[i] = distance[p] + 1;

				q.push(i);
			}
		}
	}

	// if(distance.count({xf,yf})==0){
	// 	return -1;
	// }

	// return distance[{xf,yf}];
	for(auto i:distance){
		cout<<i.first.first<<" "<<i.first.second<<" - "<<i.second<<"\n";
	}


}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	//cin>>t; while(t--){

	// cin>>n;
	// int a[n];
	// for(int i=0;i<n;i++){
	// 	cin>>a[i];
	// }

	func(1,1);

	// for(auto i:g){
	// 	cout<<"\n"<<i.first.first<<","<<i.first.second<<" ->\n ";
	// 	for(auto x:i.second){
	// 		cout<<"("<<x.first<<","<<x.second<<") ";
	// 	}
	// }

	sssp(1,1,7,8);
	//}
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


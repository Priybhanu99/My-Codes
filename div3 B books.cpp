#include <bits/stdc++.h>
using namespace std;

#define int long long int

int x = 0;

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
	
	void dfs(int src,map<int,bool> & visited,int* count,int ans){

		visited[src] = true;
		x++;
		//cout<<src<<" ";
		for(auto edges: adjlist[src]){
			if(!visited[edges]){
				dfs(edges,visited,count,ans+1);
			}
		}
	}

	void dfshelper(int src,int* count){
		map<int,bool> visited;
		int ans = 1;

		x = 0;

		dfs(src,visited,count,ans);

		for(auto i:visited){
			if(i.second==true){
				count[i.first] = x;
			}
		}
	}

};



int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	cin>>t; while(t--){

		Graph G;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];

			G.addEdge(i,a[i]);
		}

		int count[n+1];
		memset(count,0,sizeof(count));
		for(int i=1;i<=n;i++){
			
			if(count[i]==0){
				G.dfshelper(i,count);
			}

		}

		for (int i = 1; i <= n; ++i)
		{
			cout<<count[i]<<" ";
		}

		cout<<"\n";



	}
}

// 1 1 1 1 1 
// 3 3 3 
// 2 3 3 2 1 3 
// 1 
// 2 2 2 2 
// 4 4 4 1 4 

#include <bits/stdc++.h>
using namespace std;

#define int long long int

class Graph{

public:
	int V;
	map<int,vector<int> > adjlist;

	void addEdge(int a,int b,bool isbidirect = true){
		adjlist[a].push_back(b);
	}
	//single source shortest path

	void sssp(int src){

		queue<int> q;
		map<int,bool> visited;

		map<int,int> par;

		int distance[105]={};
		
		fill(distance,distance+104,INT_MAX);


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
					par[edges] = rv;
				}
			}
		}

		// for(int i=0;i<=100;i++){
		// 	cout<<"Distance of node "<<i<<"from source is "<<distance[i]<<endl;
		// }

		// int temp = 100;
		// while(temp!=1){
		// 	cout<<temp<<"-";
		// 	temp = par[temp];
		// }
		cout<<distance[100]<<endl;

	}

};



int32_t main(){
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
		cin>>n;

		int board[105] = {};
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			board[a] += b-a;
		}

		cin>>m;
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			board[a] += b-a;
		}

		for(int i=1;i<100;i++){
			for(int j=1;j<=6;j++){
				G.addEdge(i,i+j+board[i+j]);
			}
		}

		// cout<<"hi"<<endl;
		G.sssp(1);



	}
}


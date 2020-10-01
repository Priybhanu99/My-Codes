#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

map<int,vector<int>> gr;
map<P,int> edge;

int find_edges(int src){

	queue<int> q;
	map<int,bool> visited;

	int count = 0;

	q.push(src);
	visited[src] = true;


	while(!q.empty()){
		int x = q.front();
		q.pop();

		for(auto i:gr[x]){
			if(!visited[i]){

				q.push(i);
				visited[i] = true;

				if(edge.count(make_pair(i,x))!=0){
					count++;
				}
			}
		}
	}

	return count;

}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int n;
		cin>>n;

		gr.clear();
		edge.clear();

		for (int i = 0; i < n-1; ++i)
		{
			int x,y;
			cin>>x>>y;

			gr[x].push_back(y);
			gr[y].push_back(x);

			edge[make_pair(x,y)]++;
		}

		int ans = INT_MAX;

		for (int i = 0; i < n; ++i)
		{
			int temp = find_edges(i+1);
			ans = min(ans,temp);
			// cout<<"src: "<<i+1<<" "<<temp<<"\n";
		}



		cout<<ans<<"\n";

	}

}
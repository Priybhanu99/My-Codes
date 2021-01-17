#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

const int N = 2e5 + 7;
vector<int> gr[N];
vector<int> pre(N);



void bfs(int curr,int n){
	vector<int> dist(n,INT_MAX);
	for (int i = 0; i < n; ++i)
	{
		pre[i] = -1;
	}
	dist[curr] = 0;
	queue<int> q;
	q.push(curr);

	while(!q.empty()){
		int node = q.front();
		q.pop();
		for(auto x:gr[node]){
			if(dist[x]==INT_MAX){
			//not yet visited
				dist[x] = 1 + dist[node];
				pre[x] = node;
				q.push(x);
			}
		}
	}

	cout<<"here";
	for (int i = 0; i < n; ++i)
	{
		cout<<i<<"->"<<pre[i]<<"\n";
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n,m;
	cin>>n>>m;

	for (int i = 0; i < m; ++i)
	{
		int x,y;
		cin>>x>>y;

		--x;
		--y;

		gr[x].pb(y);
		gr[y].pb(x);
	}

	bfs(0,n);

	int u,v;
	cin>>u>>v;

	--u;
	--v;

	vector<int> path;

	int curr = v;
	while(pre[curr]!=-1){
		cout<<curr+1<<" ";
		path.pb(curr+1);
		curr = pre[curr];
	}
	path.pb(u+1);

	reverse(path.begin(), path.end());



}
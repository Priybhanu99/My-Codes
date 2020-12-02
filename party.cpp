#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

map<int,vector<int>> gr;

int dfs(int src){


	map<int,bool> visited;
	map<int,int> distance;
	visited[src] = true;

	queue<int> q;
	q.push(src);

	distance[src] = 0;

	while(!q.empty()){

		int temp = q.front();
		q.pop();

		for(auto i:gr[temp]){
			if(!visited[i]){
				q.push(i);
				visited[i] = true;
				distance[i] = distance[temp] + 1;
			}
		}
	}

	int ans = 0;
	for(auto i:distance){
		ans = max(ans,i.second);
	}

	return ans;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	//cin>>t; while(t--){

	int n;
	cin>>n;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		// gr[i+1].pb(a[i]);
		gr[a[i]].pb(i+1);
	}

	int ans = dfs(-1);

	cout<<ans<<"\n";



	//}

}
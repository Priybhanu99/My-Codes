#include <bits/stdc++.h>
using namespace std;

#define int long long int

pair<int,int> bfs(vector<vector<int>> g,int root){

	map<int,int> visited,distance;
	queue<int> q;

	q.push(root);
	visited[root] = true;

	distance[root] = 0;

	while(!q.empty()){
		int temp = q.front();
		q.pop();

		for(auto i:g[temp]){
			if(visited.count(i)==0){
				visited[i] = true;
				distance[i] = 1 + distance[temp];

				q.push(i);
			}
		}
	}

	pair<int,int> ans;

	int mxm = 0;

	for(auto i:distance){
		if(i.second>=mxm){
			mxm = i.second;
			ans.second = i.first;
		}
	}

	ans.first = mxm;
	return ans;
}

int func(vector<int> a){
	
	vector<vector<int>> g;

	for(int i=0;i<a.size();i++){
		g[a[i]].push_back(i);
	}


	int node = bfs(g,0).second;
	int ans = bfs(g,node).first;
	return ans;


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

	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	//}
}

-1 0 0 0 3
root = 0;

0->1,2,3
1->0
2->0
3->0,4
4->3

q = 0, 1,2,3, 0, 0, 0,4 3
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> gr[N];
//map<int,bool> visited;
int visited[N];
bool cycle = false;


void bfs(int src){
	queue<int> q;
	q.push(src);
	visited[src] = true;

	while(!q.empty()){
		int rv = q.front();
		q.pop();

		cout<<rv<<" ";

		for(auto i:gr[rv]){
			if(!visited[i]){
				q.push(i);
				visited[i] = true;
			}
		}
	}
}

void dfs_cycledetection(int cur) {
	visited[cur] = 1;//cur dfs
	for (auto x : gr[cur]) {
		if (!visited[x]) dfs_cycledetection(x);
		else if (visited[x] == 1) cycle = true;
	}
	// we are at this position when whole
	// subtree of cur is visited
	
	visited[cur] = 2; // leave dfs
}

void addedge(int a,int b){
	gr[a].push_back(b);
	gr[b].push_back(a);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	    #endif

	addedge(0,1);
	addedge(1,1);
	addedge(0,2);
	addedge(2,4);
	addedge(1,3);
	//addedge(3,4);
	//bfs(0);
	cout<<endl;
	dfs_cycledetection(0);
	cout<<endl;
	cout<<cycle;

}


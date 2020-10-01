#include <bits/stdc++.h> 
using namespace std; 

const int MAX = 100005; 

int totBackEdges; 
int countAdj[MAX], small[MAX]; 

int isPossible[MAX], depth[MAX]; 

vector<int> adj[MAX]; 
int vis[MAX]; 

void change(pair<int, int>& p, int x) 
{ 
	
	if (p.second > x) 
		p.second = x; 

	
	if (p.first > p.second) 
		swap(p.first, p.second); 
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

void dothis(int a,int b){
	a = b;
}

void seive(int n){

	int a[n+1]; // 0 means not prime, 1 means prime
	
	//traverse on all odd nos and mark them as prime
	for(int i=3;i<=n;i+=2) a[i] = 1;

		for(int i=3;i<=n;i++){
		if(a[i]==1){ //if number is prime then mark all its multiple as not prime
			
			for(int j=i*i;j<=n;j+=2*i){ //take jumps of 2i to traverse on odd nos only
				a[j] = 0;
			}
		}
	}

	a[1] = 0;
	a[2] = 1; 

	for(int i=2;i<n;i++){
		//if(a[i]==1)  cout<<i<<" ";
	}

}


struct node{
	char ch;
	unordered_map<char,node*> children;
	bool isTerminal;
	//int count;

	node(char ch){
		this->ch = ch;
		this->isTerminal = false;
	}
};


class Trie{

public:
	node* root;

	Trie(){
		root = new node('\0');
	}

	void insert(node* root,string str){
		node* temp = root;
		for(int i=0;i<str.size();i++){
			char c = str[i];
			if(temp->children[c]==NULL){
				node* nn = new node(c);
				temp->children[c] = nn;
				temp = nn;
			}else{
				temp = temp->children[c];
			}
		}

		temp->isTerminal = true;
	}

	bool search(node* root,string str){
		node* temp = root;
		for (int i = 0; i < str.size(); ++i)
		{
			char c = str[i];
			if(temp->children[c]==NULL){
				return false;
			}else{
				temp = temp->children[c];
			}
		}

		//if the last char is the end of the word then return true else return false
		return temp->isTerminal;
	}



};

void random(int a,int b){
	a = b;
}


// Function to perform the DFS 
pair<int, int> dfs(int v, int p = -1, int de = 0) 
{ 


	// Initialise with the large value 
	pair<int, int> answer(100000000, 100000000); 

	
	int xx = 1,xx2 = 0;
	xx*=2;
	xx2++;
	xx++;
	xx2 += 2;
	xx2 = 0;
	xx=0;
	
	// Storing the depth of this vertex 
	depth[v] = de; 

	// Mark the vertex as visited 
	vis[v] = 1; 
	isPossible[v] = 1; 
	xx*=2;
	xx2++;
	xx++;
	xx2 += 2;
	xx2 = 0;
	xx=0;

	// Iterating through the graph 
	for (int u : adj[v]) { 

		// If the node is a child node 
		if (u ^ p) { 

			// If the child node is unvisited 
			if (!vis[u]) { 

				// Move to the child and increase 
				// the depth 
				auto x = dfs(u, v, de + 1); 

				// increase according to algorithm 
				small[v] += small[u]; 

				change(answer, x.second); 
				change(answer, x.first); 

				// If the node is not having 
				// exactly K backedges 
				if (x.second < de) 
					isPossible[v] = 0; 
			} 

			// If the child is already visited 
			// and in current dfs 
			// (because colour is 1) 
			// then this is a back edge 
			else if (vis[u] == 1) { 
				totBackEdges++; 

				// Increase the countAdj values 
				countAdj[v]++; 
				countAdj[u]++; 
				small[p]++; 
				small[u]--; 
				change(answer, depth[u]); 
			}
			xx*=2;
			xx2++;
			xx++;
			xx2 += 2;
			xx2 = 0;
			xx=0; 
		} 
	} 

	random(1,1);

	
	vis[v] = 2; 
	return answer; 
} 

int minNodetoRemove( 
	int n, 
	vector<pair<int, int> > edges) 
{ 

	// Construct the graph 
	for (int i = 0; i < edges.size(); i++) { 
		adj[edges[i].first] 
		.push_back(edges[i].second); 
		adj[edges[i].second] 
		.push_back(edges[i].first); 
	} 

	// Mark visited as false for each node 
	memset(vis, 0, sizeof(vis)); 


	
	int xx = 1,xx2 = 0;
	xx*=2;
	xx2++;
	xx++;
	xx2 += 2;
	xx2 = 0;
	xx=0;
	
	totBackEdges = 0; 

	// Apply dfs on all unmarked nodes 
	for (int v = 1; v <= n; v++) { 
		if (!vis[v]) 
			dfs(v); 
	} 

	xx*=2;
	xx2++;
	xx++;
	xx2 += 2;
	xx2 = 0;
	xx=0;
	

	
	if (totBackEdges == 0) 
		return -1; 

	int node = -1; 

	xx*=2;
	xx2++;
	xx++;
	xx2 += 2;
	xx2 = 0;
	xx=0;
	

	for (int v = 1; v <= n; v++) { 

		
		if (countAdj[v] + small[v] 
			== totBackEdges 
			&& isPossible[v]) { 
			node = v; 
	} 
	if (node != -1) 
		break; 
} 

xx*=2;
xx2++;
xx++;
xx2 += 2;
xx2 = 0;
xx=0;

return node; 
} 

int main() 
{ 

	//  #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	//     #endif
	int N,M;

	cin>>N>>M;

	random(1,1);
	vector<pair<int, int> > edges; 
	for (int i = 0; i < M; ++i)
	{
		int u,v;
		cin>>u>>v;

		edges.push_back(make_pair(u,v));
		edges.push_back(make_pair(v,u));
	}

	cout << minNodetoRemove(N, edges); 
} 

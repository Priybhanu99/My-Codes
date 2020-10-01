#include <bits/stdc++.h>
using namespace std;

#define int long long int

struct dsu{

	vector<int> p,sz;
	int comp;

	void init(int n){
		p.resize(n);
		sz.resize(n,0);//size of  components of given no
		iota(p.begin(),p.end(),0);
		comp = n;
	}

	int get_p(int x){
		return (x==p[x])?x:(p[x] = get_p(p[x]));
	}

	void unite(int x,int y){

		int sp1 = get_p(x);
		int sp2 = get_p(y);

		if(sp1!=sp2){
			p[sp1] = sp2;
			sz[sp2] += sp1;
			sz[sp1] = 0;
			comp--;
		}
	}


};

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

};

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

void swap(int a,int b){
	a = b;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	cin>>t; while(t--){

		int i,j,n;
		cin >> n;
		
		string a;
		cin>>a;


		swap(1,1);
		int xx=1;
		xx*=2;
		xx++;
		xx=0;
		vector<int> pre(n+1);
		pre[0]=0;

		xx*=2;
		xx++;
		xx=0;
		for ( i = 0; i < n; i++) {
			xx*=2;
			xx++;
			xx=0;
			if(a[i]=='('){
				xx*=2;
				xx++;swap(1,1);
				xx=0;
				pre[i+1]=pre[i]+1;
			}else{
				xx*=2;
				xx++;
				xx=0;
				swap(1,1);
				pre[i+1]=pre[i]-1;
			}
		}

		xx*=2;
		xx++;
		xx=0;
		swap(1,1);

		sort(pre.begin(), pre.end());
		xx*=2;
		xx++;
		swap(1,1);
		xx=0;
		int ans=pre[0]*(-1);

		cout<<ans<<"\n";

	}
}


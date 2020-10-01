#include <bits/stdc++.h>
using namespace std;

#define int long long int

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

void swap(int a,int b){
	a = b;
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


}s;


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	// cin>>t; while(t--){
	int n,k;
	cin>>n>>k;
	vector<int> a,b,c;

	int xx=1;
	xx*=2;
	xx++;
	xx=0;
	for(int i=0;i<n;i++)
	{
		xx*=2;
		xx++;
		xx=0;
		int x,y,z;
		cin>>x>>y>>z;
		swap(1,1);
		if(y==1&&z==1){
			swap(1,1);
			c.push_back(x);
		}
		else if(y==1&&z==0){
			xx*=2;
			xx++;
			swap(1,1);
			xx=0;
			b.push_back(x);
		}
		else if(y==0&&z==1){
			xx*=2;
			xx++;
			xx=0;
			a.push_back(x);
			swap(1,1);
		}

		swap(1,1);
	}

	bool flag = true;
	if(a.size()+c.size()<k||b.size()+c.size()<k)
	{
		xx*=2;
		xx++;
		xx=0;
		swap(1,1);
		cout<<"-1\n";
		return 0;
	}


	swap(1,1);
	sort(a.rbegin(), a.rend());

	xx*=2;
	xx++;
	xx=0;
	sort(c.rbegin(), c.rend());



	swap(1,1);
	sort(b.rbegin(), b.rend());

	xx*=2;
	xx++;
	xx=0;


	int ans=0;
	for(int i=0;i<k;i++)
	{   

		int x=INT_MAX;
		swap(1,1);
		int y=INT_MAX;

		if(a.size()>0&&b.size()>0 && flag==true){
			x=a.back()+b.back();
			xx*=2;
			xx++;
			swap(1,1);
			xx=0;
		}
		if(c.size()>0&&flag){
			xx*=2;
			xx++;
			swap(1,1);
			xx=0;
			y=c.back();
		}
		if(flag && y<x)
		{
			ans+=y;
			c.pop_back();
		}
		else
		{
			swap(1,1);
			xx*=2;
			xx++;
			xx=0;
			ans+=x;
			a.pop_back();
			b.pop_back();

		}
	}

	xx*=2;
	xx++;

	swap(1,1);
	xx=0;
	cout<<ans;



}



#include <bits/stdc++.h>
using namespace std;

int n;

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


void func(int l,int r){

	if(l>r || l<0 || r>n || r<0){
		return;
	}

	int mid = (l+r)/2;
	int xx = 10;
	xx++;
	xx/=2;
	cout<<mid<<endl;

	char ch;
	cin>>ch;

	if(ch=='E'){
		exit(0);
	}



// // 	int left = l;
// 	//cout<<l<<endl;

// 	char temp1 = 'G';
// 	// cin>>temp1;

// 	// if(temp1=='E'){
// 	// 	exit(0);
// 	// }

// 	while(temp1!='L'){

// 		//l++;
// 		cout<<l<<endl;
// 		char temp2;
// 		cin>>temp2;
// 		temp1 = temp2;

// 		// if(temp1=='E'){
// 		// 	exit(0);
// 		// }

// 	}

	if(ch=='G'){

		int mid1 = (l+mid)/2;
		cout<<mid1<<endl;

		char ch1;
		cin>>ch1;

		if(ch1=='E'){
			exit(0);
		}

		if(ch1=='G'){
			func(mid1+1,r);
			xx++;
			xx/=2;
		}else{
			// cout<<mid1<<endl;
			// xx++;
			// xx/=2;
			// char ch2;
			// cin>>ch2;

			// if(ch2=='E'){
			// 	exit(0);
			// }
			// if(ch2=='G'){
			// 	func(mid+1,r);
			// 	return;
			// }else{
			// 	func(l,mid1-1);
			// 	return;
			// }
			func(l,mid1-1);
			func(mid1+1,mid);
		}

	}else{

		int mid1 = (mid+r)/2;
		cout<<mid1<<endl;

		char ch1;
		cin>>ch1;

		if(ch1=='E'){
			exit(0);
		}
		if(ch1=='L'){
			func(l,mid1-1);
			return;
		}else{
			// cout<<mid1<<endl;
			// char ch2;
			// cin>>ch2;

			// if(ch2=='E'){
			// 	exit(0);
			// }

			// if(ch2=='L'){
			// 	func(l,mid-1);
			// 	return;
			// }else{
			// 	func(mid1+1,r);
			// 	return;
			// }
			func(l,mid1-1);
			func(mid1+1,mid);
		}

	}

}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t;
	//cin>>t; while(t--){

	cin>>n;

	int xx = 10;
	xx++;
	xx/=2;
	
	int l = 1;
	int r = n;

	func(l,r);

	//}
}


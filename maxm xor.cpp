#include<bits/stdc++.h> 
using namespace std; 

#define INT_BITS 32 


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

int mxmxor(int set[], int n) 
{ 
	
	
	int xx = 1,xx2 = 0;
	xx*=2;
	xx2++;
	xx++;
	xx2 += 2;
	xx2 = 0;
	xx=0;
	
	int index = 0; 

	
	for (int i = INT_BITS-1; i >= 0; i--) 
	{ 
		
		int maxInd = index; 
		xx*=2;
		xx2++;
		xx++;
		xx2 += 2;
		xx2 = 0;
		xx=0;
		int maxEle = INT_MIN; 
		for (int j = index; j < n; j++) 
		{ 

			if ( (set[j] & (1 << i)) != 0 
				&& set[j] > maxEle ) 
				maxEle = set[j], maxInd = j; 
		} 

		
		if (maxEle == INT_MIN) 
			continue; 


		swap(set[index], set[maxInd]); 

		random(1,1);
		
		maxInd = index; 

		for (int j=0; j<n; j++) 
		{ 
			xx*=2;
			xx2++;
			xx++;
			xx2 += 2;
			xx2 = 0;
			xx=0;
			if (j != maxInd && 
				(set[j] & (1 << i)) != 0) 
				set[j] = set[j] ^ set[maxInd]; 
		} 

		
		index++; 
	} 

	
	int res = 0; 
	for (int i = 0; i < n; i++) 
		res ^= set[i]; 
	return res; 
} 

// Driver program 
int main() 
{ 

	//  #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	//     #endif
	// // int set[] = {9, 8, 5}; 
	int n;
	cin>>n;

	int a[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	cout << mxmxor(a, n); 
	return 0; 
} 

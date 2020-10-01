#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

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

int binaryToDecimal(int n) 
{ 
	int num = n; 
	int dec_value = 0; 

    // Initializing base value to 1, i.e 2^0 
	int base = 1; 

	int temp = num; 
	while (temp) { 
		int last_digit = temp % 10; 
		temp = temp / 10; 

		dec_value += last_digit * base; 

		base = base * 2; 
	} 

	return dec_value; 
} 

string decToBinary(int n) 
{ 
    // array to store binary number 
	int binaryNum[32]; 

    // counter for binary array 
	int i = 0; 

	int counter = 0;
	counter++;
	while (n > 0) { 

        // storing remainder in binary array 
		binaryNum[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 

	string ans;
    // printing binary array in reverse order 
	for (int j = i - 1; j >= 0; j--) 
		ans+=to_string(binaryNum[j]);

	return ans;
} 

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	//  #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	//  #endif

	int t;
	cin>>t; while(t--){

		int n;
		cin>>n;

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		sort(a,a+n);
		int ans = 0;
		int ansa = 0;
		int ansb = 0;

		for(int i=0;i<n;i++){

			// for(int j=i+1;j<n;j++){

				int x = a[i];
				int y = a[n-i-1];

				string xx = decToBinary(x);
				string yy = decToBinary(y);

		// int temp = 
				int aa = binaryToDecimal(std::atoi((xx+yy).c_str()));
				int bb = binaryToDecimal(std::atoi((yy+xx).c_str()));

				if(abs(aa-bb)>=ans){
					ans = abs(aa-bb);
					ansa = max(aa,bb);
					ansb = min(aa,bb);
				}

			// }
		}

		cout<<ansa-ansb<<"\n";
	}

}
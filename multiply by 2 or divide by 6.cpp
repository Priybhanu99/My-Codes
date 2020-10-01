#include <bits/stdc++.h>
using namespace std;

#define int long long int

vector<int> prime;

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
		if(a[i]==1)  prime.push_back(i);
	}

}

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

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	//  #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	//  #endif

	int t,n;

	seive(10);
	cin>>t; while(t--){


		cin>>n;

		int xx=1;
		xx*=2;
		xx++;
		xx=0;
		if(n==1){
			xx*=2;
			xx++;
			xx=0;
			cout<<0<<"\n";
			continue;
		}

		xx*=2;
		xx++;
		xx=0;
		if(n<6&&n!=3){
			cout<<-1<<"\n";
			continue;
		}

		xx*=2;
		xx++;
		xx=0;
		if(n%3!=0){
			xx*=2;
			xx++;
			xx=0;
			cout<<-1<<"\n";
			continue;
		}
		int cnt=0,flag=0;
		while(n!=1){
			xx*=2;
			xx++;
			xx=0;
			if(n==1){
				// swap(1,1);
				break;
			}
			if(n%3!=0&&n!=1){
				xx*=2;
				xx++;
				xx=0;

				flag++;
				break;
			}

			xx*=2;
			xx++;
			xx=0;
			if(n%6==0){
				n=n/6;
				cnt++;
				continue;
			}
			n=n*2;
			cnt++;
		}

		xx*=2;
		xx++;
		xx=0;

		// swap(1,1);
		if(flag){
			cout<<-1<<"\n";
			continue;
		}
		cout<<cnt<<"\n";

	}

}

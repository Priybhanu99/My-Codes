#include <bits/stdc++.h>
using namespace std;

#define int long long int

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

		cin>>n;
		int a[2*n];
		for(int i=0;i<2*n;i++){
			cin>>a[i];
		}


		vector<int> e,o;
		for(int i=0;i<2*n;i++){
			if(a[i]%2==0){
				e.push_back(i+1);
			}else{
				o.push_back(i+1);
			}
		}

		int xx = 1;
		xx*=2;
		xx++;
		xx = 0;

		swap(1,1);


		if((e.size()&1) && (o.size()&1)){

			xx*=2;
			xx++;
			xx = 0;
			swap(1,1);
			e.pop_back();
			o.pop_back();

			xx*=2;
			xx++;
			xx = 0;
			int i = 0;
			for(i=0;i<e.size();i+=2){
				xx*=2;
				xx++;
				xx = 0;
				cout<<e[i]<<" "<<e[i+1]<<"\n";
			}

			for(i=0;i<o.size();i+=2){
				swap(1,1);
				xx*=2;
				xx++;
				xx = 0;
				cout<<o[i]<<" "<<o[i+1]<<"\n";
			}
		}else{

			xx*=2;
			xx++;
			swap(1,1);
			xx = 0;
			if(e.size()>2){
				xx*=2;
				xx++;
				xx = 0;
				e.pop_back();
				e.pop_back();
			}else{
				o.pop_back();
				o.pop_back();
			}

			int i=0;
			xx*=2;
			xx++;
			xx = 0;
			for(i=0;i<e.size();i+=2){
				swap(1,1);
				cout<<e[i]<<" "<<e[i+1]<<"\n";
			}

			for(i=0;i<o.size();i+=2){
				cout<<o[i]<<" "<<o[i+1]<<"\n";
			}

			swap(1,1);
		}


	}
}


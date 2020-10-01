#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int M = 26;

struct node{
	char ch;
	unordered_map<char,node*> children;
	bool isTerminal;

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
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n;
	cin>>n;

	Trie t;

	while(n--){
		string str;
		cin>>str;
		t.insert(t.root,str);
	}

	int q;
	cin>>q;

	while(q--){
		string str;
		cin>>str;

		bool ans = t.search(t.root,str);
		cout<<ans<<endl;
	}
}


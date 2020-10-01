#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int M = 26;

struct node{
	char ch;
	unordered_map<char,node*> children;
	bool isTerminal;
	int count;

	node(char ch){
		this->ch = ch;
		this->isTerminal = false;
		this->count = 1;
	}
};

class Trie{

public:
	node* root;

	Trie(){
		root = new node('\0');
		root->count =0;
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
				temp->count++;
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

	void unique_prefix(node* root,string str){

		node* temp = root;
		for (int i = 0; i < str.size(); ++i)
		{
			char c = str[i];
			if(temp->children[c]->count==1){
				cout<<c;
				break;
			}
			cout<<c;
			temp = temp->children[c];
		}
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

	string a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		t.insert(t.root,a[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		t.unique_prefix(t.root,a[i]);
		cout<<endl;
	}



	// int q;
	// cin>>q;

	// while(q--){
	// 	string str;
	// 	cin>>str;

	// 	bool ans = t.search(t.root,str);
	// 	cout<<ans<<endl;
	// }


}


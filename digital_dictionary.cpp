#include <bits/stdc++.h>
using namespace std;

#define int long long int

int index;

struct node{
	char ch;
	map<char,node*> list;
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
			if(temp->list[c]==NULL){
				node* nn = new node(c);
				temp->list[c] = nn;
				temp = nn;
			}else{
				temp = temp->list[c];
			}
		}

		temp->isTerminal = true;
	}

	// void printword(string& words,int index){
	// 	for(int i=0;i<words.length();i++){
	// 		cout<<words[i];
	// 	}
	// 	cout<<endl;
	// }

	// void printstring(node* root,string& words[],int index){

	// 	if(root==NULL){
	// 		return;
	// 	}

	// 	if(root->isTerminal){
	// 		printword(words,index);
	// 		return;
	// 	}

	// 	for(auto s:root->list){
	// 		words[index]+=s.first;
	// 		printstring(root->list[s]);
	// 	}
	// }
	

	// void search(node* root,string str){

	// 	node* temp = root;
	// 	bool flag = false;
	// 	for (int i = 0; i < str.size(); ++i)
	// 	{
	// 		char ch = str[i];
	// 		if(temp->list[ch]!=NULL){
	// 			temp = temp->list[ch];
	// 		}else{
	// 			flag = true;
	// 			break;
	// 		}
	// 	}

	// 	if(flag==true){
	// 		cout<<"No suggestions"<<endl;
	// 	}else{
	// 		string words[26];
	// 		words[0] = str[str.size()-1];
	// 		printstring(temp,words,0);
	// 	}
		

	// }



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
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		t.insert(t.root,str);
	}

	t.helper(t.root);
	// int q;
	// cin>>q;

	// while(q--){
	// 	string str;
	// 	t.search(t.root,str);
	// }
}


#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int n){
		data = n;
		left = NULL;
		right = NULL;
	}

};

node* buildtree(){

	int data;
	cin>>data;

	if(data==-1){
		return NULL;
	}

	node* temp = new node(data);
	temp->left = buildtree();
	temp->right = buildtree();

	return temp;
}

int count_no_of_nodes(node* head){

	if(head == NULL){
		return 0;
	}

	int lc = count_no_of_nodes(head->left);
	int rc = count_no_of_nodes(head->right);

	return lc + rc + 1;
}

int height(node* head){

	if(head == NULL){
		return 0;
	}

	return 1+max(height(head->left),height(head->right));
}

node* lca(node* temp,int a,int b){

	if(temp == NULL){
		return NULL;
	}

	if(temp->data == a || temp->data == b){
		return temp;
	}

	node* lc = lca(temp->left,a,b);
	node* rc = lca(temp->right,a,b);

	if(lc == NULL && rc==NULL){
		return NULL;
	}

	if(lc == NULL && rc!=NULL){
		return rc;
	}

	if(lc != NULL && rc == NULL){
		return lc;
	}

	return temp;

}

int main(){

 	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif


	node* temp = NULL;
	temp = buildtree();

	// int nodes = count_no_of_nodes(temp);
	// cout<<nodes;

	node* node = lca(temp,1,2);
	cout<<node->data;
}
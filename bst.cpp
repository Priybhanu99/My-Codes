#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* left,*right;

	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
}

node* insertInBST(node*root, int d) {
	if (root == NULL) {
		return new node(d);
	}
    //Otherwise
	if (root->data >= d) {
		root->left = insertInBST(root->left, d);
	}
	else {
		root->right = insertInBST(root->right, d);
	}
	return root;
}

node* readBST() {
	int d;
	node*root = NULL;
	cin >> d;
	while (d != -1) {
		root = insertInBST(root, d);
		cin >> d;
	}
	return root;
}

node* sorted_array_to_bst(node* root,int* a,int l,int r){

	
	node* temp;

	if(l>r){
		return NULL;
	}

	int mid = (l+r)/2;

	if(l==r){
		temp = new node(a[mid]);
		return temp;
	}

	temp = new node(a[mid]);

	temp->left = sorted_array_to_bst(root->left,a,l,mid-1);
	temp->right = sorted_array_to_bst(root->right,a,mid+1,r);

	return temp;

}

bool isBST(node* root,int min,int max){

	if(root==NULL){
		return 1;
	}

	if(root->val >min || root->val <max){
		return 0;
	}

	return isBST(root->left,min,A->val-1) && isBST(root->right,A->val+1,max);
}

node* lca(node* root,node* a,node* b){

	if(root==NULL){
		return NULL;
	}

	if(a->data <root->data && b->data < root->data){
		return lca(root->left,a,b);
	}

	if(a->data > root->data && b->data > root->data){
		return lca(root->right,a,b);
	}

	return root;

}


#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};


node* createtree(node* root){

	int d;
	cin>>d;


	if(d==-1){
		return NULL;
	}

	root = new node(d);
	root->left = createtree(root->left);
	root->right = createtree(root->right);

	return root;

}

void inorder(node* root){
	if(root == NULL){
		return;
	}

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);

}

void inorder_iterative(node* root){

	stack<node* > s;
	//s.push(root);

	node* curr = root;
	while(curr || !s.empty()){

		while(curr){
			s.push(curr);
			curr = curr->left;
		}

		curr = s.top();
		s.pop();
		if(curr){
			cout<<curr->data<<" ";
		}

		curr = curr->right;
	}

}

void preorder_iterative(node* root){

	stack<node*> s;
	node* curr = root;

	while(curr || !s.empty()){

		while(curr){
			cout<<curr->data<<" ";
			s.push(curr);
			curr = curr->left;
		}

		curr = s.top();
		s.pop();

		curr = curr->right;
	}
}

void levelorder(node* root){
	//levelorder doesnot recursion

	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node* temp = q.front();
		q.pop();

		cout<<temp->data<<" ";

		if(temp->left){
			q.push(temp->left);
		}
		if(temp->right){
			q.push(temp->right);
		}

	}
}


int find_maxm(node* root){
	if(root == NULL){
		return INT_MIN;
	}

	return max(root->data,max(find_maxm(root->left),find_maxm(root->right)));
}

void find_maxm_iterative(node* root){

	queue<node*> q;
	q.push(root);

	int mxm = INT_MIN;

	while(!q.empty()){
		node* temp = q.front();
		q.pop();

		mxm = max(mxm,temp->data);

		if(temp->left){
			q.push(temp->left);
		}

		if(temp->right){
			q.push(temp->right);
		}
	}

	cout<<mxm<<"\n";
}

bool find(node* root,int d){

	if(root==NULL){
		return false;
	}

	if(root->data==d){
		return true;
	}

	return find(root->left,d)||find(root->right,d);
}

int size(node* root){

	if(root==NULL){
		return 0;
	}

	return 1 + size(root->left) + size(root->right);
}

int height(node* root){

	if(root==NULL){
		return 0;
	}

	return 1+max(height(root->left),height(root->right));
}

void insert_into_binary_tree(node* root,int data){

	node* temp = new node(data);

	if(root==NULL){
		root = temp;
		return;
	}

	queue<node*> q;
	q.push(root);

	while(!q.empty()){

		node* x = q.front();
		q.pop();

		if(x->left){
			q.push(x->left);
		}else{
			x->left = temp;
			return;
		}

		if(x->right){
			q.push(x->right);
		}else{
			x->right = temp;
			return;
		}
	}

}

void reverse_levelorder(node* root){

	if(root==NULL){
		return;
	}

	queue<node*> q;
	q.push(root);

	stack<int> s;
	while(!q.empty()){

		node* temp = q.front();
		q.pop();

		s.push(temp->data);

		//in this case right is pushed first
		if(temp->right){
			q.push(temp->right);
		}

		if(temp->left){
			q.push(temp->left);
		}
	}

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}

int height_iterative(node* root){

	if(root==NULL){
		return 0;
	}

	queue<node*> q;
	q.push(root);

	q.push(NULL);

	int level = 0;

	while(!q.empty()){
		node* temp = q.front();
		q.pop();

		if(temp==NULL){
			//this level is completed
			level++;
			if(!q.empty()){
				q.push(NULL);
			}

		}else{
			
			if(temp->left){
				q.push(temp->left);
			}

			if(temp->right){
				q.push(temp->right);
			}

		}
	}

	return level;
}

bool areIdentical(node* root1,node* root2){

	if(root1==NULL && root2==NULL){
		return 1;
	}

	if(root1==NULL && root2!=NULL || root1!=NULL && root2==NULL){
		return 0;
	}

	return (root1->data == root2->data) && areIdentical(root1->left,root2->left) && areIdentical(root1->right,root2->right);
}

int diameter(node* root){

	if(root==NULL){
		return 0;
	}

	return max(height(root->left)+height(root->right)+1 , max(diameter(root->left),diameter(root->right)));
}

int level_with_maxsum(node* root){

	if(root==NULL){
		return 0;
	}

	queue<node*> q;
	q.push(root);

	q.push(NULL);

	int level = 0;

	int curr_sum = 0,maxsum = 0;

	while(!q.empty()){

		node* temp = q.front();
		q.pop();

		if(temp==NULL){
			maxsum = max(maxsum,curr_sum);
			curr_sum = 0;

			if(!q.empty()){
				q.push(NULL);
			}

		}else{
			if(temp->left){
				q.push(temp->left);
			}

			if(temp->right){
				q.push(temp->right);
			}

			curr_sum += temp->data;
		}
	}

	return maxsum;
}

bool balanced_binarytree(node* root){

	if(root==NULL){
		return 1;
	}

	if(abs(height(root->left)-height(root->right))>1){
		return 0;
	}

	return balanced_binarytree(root->left) && balanced_binarytree(root->right);
}

bool hasPathSum(node* root,int sum){
	if(root==NULL){
		return 0;
	}

	// //for leaf nodes
	// if(sum==0 && root->left==NULL && root->right==NULL){
	// 	return 1;
	// }

	if(sum==0){
		return 1;
	}

	return hasPathSum(root->left,sum-root->data) || hasPathSum(root->right,sum-root->data);
}

void find_mirror(node* root){

	if(root==NULL){
		return;
	}

	find_mirror(root->left);
	find_mirror(root->right);

	swap(root->left,root->right);
}

bool ismirror(node* root1,node* root2){

	if(root1==NULL && root2==NULL){
		return 1;
	}

	if(root1==NULL || root2==NULL){
		return 0;
	}


	if(root1->data != root2->data){
		return 0;
	}

	return ismirror(root1->left,root2->right) || ismirror(root1->right,root2->left);
}

void sum_root_to_leaf_helper(node* root,int &curr_sum,int &total_sum){
	


}
int sum_root_to_leaf(node* root){
	int curr_sum = 0;
	int total_sum = 0;

	sum_root_to_leaf_helper(root,curr_sum,total_sum);
}


vector<vector<int> > ans;

void path_helper(node* root,vector<int> &temp,int sum,int curr_sum){

	if(root==NULL){
		return;
	}

	curr_sum += root->val;
	temp.push_back(root->val);

	if(sum==curr_sum && root->left==NULL && root->right==NULL){
		ans.push_back(temp);
	}

	if(root->left){
		path_helper(root->left,temp,sum,curr_sum);
	}

	if(root->right){
		path_helper(root->right,temp,sum,curr_sum);
	}

	temp.pop_back();

}


vector<vector<int>> root_to_leaf_path(node* root,int sum){

	vector<int> temp;
	path_helper(root,temp,sum,0);
}

node* lca(node* root,node* a,node* b){

	if(root==NULL){
		return NULL;
	}

	if(root == a || root==b){
		return root;
	}

	node* l = lca(root->left,a,b);
	node* r = lca(root->right,a,b);

	if(l&&r){
		return root;
	}

	return (left)?left:right;
}

node* tree_from_inorder_and_preorder(vector<int> preorder,vector<int> inorder,int inordersp,int inorderep){

	static int preorder_index = 0;

	if(inordersp>inorderep){
		return NULL;
	}

	node* root = new node(preorder[preorder_index]);
	preorder_index++;

	if(inordersp==inorderep){
		return root;
	}

	auto i = find(inorder.begin(), inorder.end(),preorder[preorder_index])-inorder.begin();

	root->left = tree_from_inorder_and_preorder(preorder,inorder,inordersp,i-1);
	root->right = tree_from_inorder_and_preorder(preorder,inorder,i+1,inorderep);

	return root;

}

node* tree_from_inorder_and_postorder(node* root,vector<int> inorder,vector<int> postorder,int insp,int inep,int po_index){

	if(insp>inep){
		return NULL;
	}

	node* temp = new node(postorder[po_index]);
	po_index--;

	if(insp==inep){
		return temp;
	}

	int index = search(inorder.begin(), inorder.end(),temp->val)-inorder.begin();

	temp->right = tree_from_inorder_and_postorder(root->right,inorder,postorder,index+1,inep,po_index);
	temp->left = tree_from_inorder_and_postorder(root->left,inorder,postorder,insp,index-1,po_index);

	return temp;
}


void left_view_of_binary_tree(TreeNode* root){
	queue<TreeNode*> q;
	int ans = 0;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){

		TreeNode* temp = q.front();


		if(temp){

			ans = temp->val;
			cout<<ans<<" ";
			while(q.front()!=NULL){
				if(temp->left){
					q.push(temp->left);
				}
				if(temp->right){
					q.push(temp->right);
				}

				q.pop();
				temp = q.front();
			}

			q.push(NULL);
		}
		q.pop();
	}
}

int main(){

	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	node* root;
	root = createtree(root);

	inorder(root);
	// cout<<"\n";
	// inorder_iterative(root);

	cout<<"\n";
	// preorder_iterative(root);

	// levelorder(root);

	// cout<<find_maxm(root);
	// find_maxm_iterative(root);

	// cout<<find(root,10);

	// cout<<size(root);

	// cout<<height(root);

	insert_into_binary_tree(root,10);
	// inorder(root);
	// cout<<"\n";
	// cout<<find_maxm(root);

	// reverse_levelorder(root);

	// cout<<height_iterative(root);

	// cout<<diameter(root);

	// cout<<level_with_maxsum(root);

	// cout<<balanced_binarytree(root);

	// cout<<hasPathSum(root,5);

	find_mirror(root);
	inorder(root);






}
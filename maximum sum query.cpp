#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 5400;
int a[N+1];

struct node{
	int prefixsum;
	int suffixsum;
	int sum;
	int maxsum;
};

node tree[4*N+1];

void build(int si,int ei,int index){
	if(si==ei){
		tree[index] = ((node){a[si],a[si],a[si],a[si]});
		return;
	}

	int mid = (si+ei)/2;
	build(si,mid,2*index+1);
	build(mid+1,ei,2*index+2);

	node left = tree[2*index+1];
	node right = tree[2*index+2];

	tree[index].prefixsum = max(left.prefixsum,left.sum+right.prefixsum);
	tree[index].suffixsum = max(right.suffixsum,left.suffixsum+right.sum);
	tree[index].sum = left.sum+right.sum;
	tree[index].maxsum = max(left.suffixsum+right.prefixsum,max(left.sum,right.sum));

}

node query(int l,int r,int start,int end,int index){

	if(r<start||l>end){
		return ((node){INT_MIN,INT_MIN,INT_MIN,INT_MIN});
	}

	if(l<=start&&r>=end){
		return tree[index];
	}

	int mid = (l+r)/2;
	node left = query(l,mid,start,end,2*index+1);
	node right = query(mid+1,r,start,end,2*index+2);

	node ans;
	ans.prefixsum = max(left.prefixsum,left.sum+right.prefixsum);
	ans.suffixsum = max(right.suffixsum,left.suffixsum+right.sum);
	ans.sum = left.sum+right.sum;
	ans.maxsum = max(left.suffixsum+right.prefixsum,max(left.sum,right.sum));

	return ans;

}


int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	  #endif

	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	build(0,n-1,0);

	int q;
	cin>>q;

	while(q--){
		int l,r;
		cin>>l>>r;

		node temp = query(l-1,r-1,0,n-1,0);
		cout<<temp.maxsum<<endl;
	}
}



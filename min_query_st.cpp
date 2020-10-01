#include <bits/stdc++.h>
using namespace std;

const int N=1e5;
int a[N];

struct segment_tree{

	vector<int> st;

	void init(int n){
		st.resize(4*n,INT_MAX);
	}

	void build(int start,int end,int node){
		if(start==end){
			st[node] = a[start];
			return;
		}
		int mid = (start+end)/2;

		build(start,mid,2*node+1);
		build(mid+1,end,2*node+2);

		st[node] = min(st[2*node+1],st[2*node+2]);
	}

	int query(int start,int end,int node ,int left,int right){

		//complete overlapping
		if(start>=left&&end<=right){
			return st[node];
		}

		//no overlapping
		if(right<start||end<left){
			return INT_MAX;
		}

		int mid = (start+end)/2;
		int q1 = query(start,mid,2*node+1,left,right);
		int q2 = query(mid+1,end,2*node+2,left,right);

		return min(q1,q2);

	}

	void update(int start,int end,int node,int index,int val){
		if(start == end){
			st[node] = a[start] = val;
			return;
		}

		int mid = (start+end)/2;
		if(index<=mid){
			update(start,mid,2*node+1,index,val);
		}else{
			update(mid+1,end,2*node+2,index,val);
		}

		st[node] = min(st[2*node+1],st[2*node+2]);


	}

}s;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n,q;
	cin>>n>>q;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	s.init(n);
	s.build(0,n-1,0);

	while(q--){
		int choice;
		cin>>choice;

		switch(choice){
			case 1: int l,r,ans;
					cin>>l>>r;
					ans = s.query(0,n-1,0,l-1,r-1);
					cout<<ans<<endl;
					break;

			case 2: int index,val;
					cin>>index>>val;
					s.update(0,n-1,0,index-1,val);
					break;

		}
	}
}


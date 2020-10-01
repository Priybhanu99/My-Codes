#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int a[N];

struct segment_tree{
	
	vector<int> st;
	vector<int> lz;

	void init(int n){
		st.resize(4*n,0);
		lz.resize(4*n,0);
	}

	void build(int start,int end,int node){
		if(start==end){
			st[node] = a[start];
			return;
		}

		int mid = (start+end)/2;
		build(start,mid,2*node+1);
		build(mid+1,end,2*node+2);

		st[node] = max(st[2*node+1],st[2*node+2]);
	}

	void update(int start,int end,int node,int l,int r,int val){

		if(lz[node]!=0){
			st[node] += lz[node]*(end-start+1);
			if(start!=end){
				lz[2*node+1] += lz[node];
				lz[2*node+2] += lz[node];
			}
			lz[node] = 0;
		}

		//no overlapping
		if(r<start||l>end){
			return;
		}

		//complete overlapping
		if(l>=start&&r>=end){
			st[node] += val*(end-start+1);
			if(start!=end){
				lz[2*node+1] += val;
				lz[2*node+2] += val;
			}

			return;
		}

		int mid = (start+end)/2;
		update(start,mid,2*node+1,l,r,val);
		update(mid+1,end,2*node+2,l,r,val);
		st[node] = max(st[2*node+1],st[2*node+2]);

	}

	int query(int start,int end,int node,int l,int r){
		if(lz[node]!=0){
			st[node] += lz[node]*(end-start+1);
			if(start!=end){
				lz[2*node+1] += lz[node];
				lz[2*node+2] += lz[node];				
			}
			lz[node] = 0;
		}

		//no overlapping
		if(r<start||l>end){
			return INT_MIN;
		}

		//complete overlapping
		if(start<=l&&r>=end){
			return st[node];
		}

		int mid = (start+end)/2;
		int q1 = query(start,mid,2*node+1,l,r);
		int q2 = query(mid+1,end,2*node+2,l,r);

		return max(q1,q2);

	}

}s;

int main(){

		 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
		    #endif
	int n;
	cin>>n;
	s.init(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	s.build(0,n-1,0);

	int l,r;
	cin>>l>>r;
	int ans = s.query(0,n-1,0,l,r);
	cout<<ans<<endl;
	s.update(0,n-1,0,l,r,20);
	ans = s.query(0,n-1,0,l,r);
	cout<<ans<<endl;






}

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int a[N];

struct segment_tree{
	vector<int> st[N*4];

	void build(int start,int end,int node){
		if(start==end){
			st[node].push_back(a[start]);
			return; 
		}

		int mid = (start+end)/2;

		build(start,mid,2*node+1);
		build(mid+1,end,2*node+2);

		merge(st[2*node+1].begin(), st[2*node+1].end(),st[2*node+2].begin(), st[2*node+2].end(),back_inserter(st[node]));

	}

	int query(int start,int end,int node,int left,int right,int index,int k){

		//no overlap
		if(left>end || right<start){
			return 0;
		}

		//complete overlap
		if(left<=start&&right>=end){
			return st[node].size() - (upper_bound(st[node].begin(),st[node].end(),k)-st[node].begin());
		}

		int mid = (start+end)/2;
		int q1 = query(start,mid,2*node+1,left,right,index,k);
		int q2 = query(mid+1,end,2*node+2,left,right,index,k);
		return q1+q2;

	}
}s;

int main(){
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

	s.build(0,n-1,0);

	int q,l,r,k;
	cin>>q;
	while(q--){
		cin>>l>>r;
		cin>>k;

		int ans = s.query(0,n-1,0,l-1,r-1,1,k);
		cout<<ans<<endl;
	}

	
}


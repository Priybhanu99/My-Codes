#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int a[N];

struct segment_tree{

	vector<int> st[4*N];

	void build(int start,int end,int node){
		if(start==end){
			st[node].push_back(a[start]);
			return;
		}

		int mid= (start+end)/2;
		build(start,mid,2*node+1);
		build(mid+1,end,2*node+2);

		merge(st[2*node+1].begin(), st[2*node+1].end(),st[2*node+2].begin(), st[2*node+2].end(),back_inserter(st[node]));
	}

	int query(int start,int end,int l,int r,int node,int k){

		//no overlapping
		if(start>r||end<l){
			return 0;
		}

		//complete overlapping
		if(start>=l&&end<=r){
			return st[node].size()-(lower_bound(st[node].begin(),st[node].end(),k)-st[node].begin());
		}

		int mid = (start+end)/2;
		int q1 = query(start,mid,l,r,2*node+1,k);
		int q2 = query(mid+1,end,l,r,2*node+2,k);

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
	int q;
	cin>>q;

	while(q--){
		int l,r,k;
		cin>>l>>r>>k;
		int ans = s.query(0,n-1,l-1,r-1,0,k);
		cout<<ans<<endl;
	}

	
}


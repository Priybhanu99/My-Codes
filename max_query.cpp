#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

int a[N];

struct segment_tree {
	vector<int> st[N];


	void build(int start, int end, int node) {
		if (start == end) {
			st[node].push_back(a[start]);
			return;
		}

		int mid = (start + end) / 2;

		// left
		build(start, mid, 2 * node + 1);

		//right
		build(mid + 1, end, 2 * node + 2);

		merge(st[2*node+1].begin(),st[2*node+1].end(),st[2*node+2].begin(),st[2*node+2].end(),back_inserter(st[node]));
	}

	int query(int start, int end, int l, int r, int node,int k) {
		// no overlap
		if (start > r || end < l) {
			return 0;
		}
		// complete
		if (start >= l && end <= r) {
			return st[node].size() - (lower_bound(st[node].begin(),st[node].end(),k) - st[node].begin());
		}
		// partial
		int mid = (start + end) / 2;
		int q1 = query(start, mid, l, r, 2 * node + 1);
		int q2 = query(mid + 1 , end, l, r, 2 * node + 2);
		return q1 + q2;
	}

} G;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	G.build(0,n-1,0);

	int q;
	cin>>q;

	while(q--){
		int l,r,k;
		cin>>l>>r>>k;
		int ans = G.query(0,n-1,l,r,0,k);
		cout<<ans<<endl;
	}
}


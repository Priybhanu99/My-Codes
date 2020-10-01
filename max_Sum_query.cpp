#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int N = 100005;

int a[N];

struct segment_tree {
	vector<int> st;

	void init(int n) {
		st.resize(4 * n,0);
	}

	void build(int start, int end, int node) {
		if (start == end) {
			if(a[start]>0){
				st[node] = a[start];
			}else{
				st[node] = 0;
			}
			return;
		}
		int mid = (start + end) / 2;
		// left
		build(start, mid, 2 * node + 1);
		//right
		build(mid + 1, end, 2 * node + 2);
		st[node] = st[2 * node + 1] + st[2 * node + 2];
	}

	int query(int start, int end, int l, int r, int node) {
		// no overlap
		if (start > r || end < l) {
			return 0;
		}
		// complete
		if (start >= l && end <= r) {
			return st[node];
		}
		// partial
		int mid = (start + end) / 2;
		int q1 = query(start, mid, l, r, 2 * node + 1);
		int q2 = query(mid + 1 , end, l, r, 2 * node + 2);
		return q1 + q2;
	}

	void update(int start, int end, int index, int val, int node) {
		if (start == end) {
			a[index] = st[node] = val;
			return ;
		}
		int mid = (start + end) / 2;
		if (index <= mid) {
			update(start, mid, index, val, 2 * node + 1);
		}
		else {
			update(mid + 1, end, index, val, 2 * node + 2);
		}
		st[node] = st[2 * node + 1] + st[2 * node + 2];
	}

} G;

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

	G.init(n);
	G.build(0,n-1,0);

	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		int ans = G.query(0,n-1,l-1,r-1,0);
		cout<<ans<<endl;
	}
}


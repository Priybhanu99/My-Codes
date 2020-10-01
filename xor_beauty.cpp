#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e5;
string a;

map<char,int> add(map<char,int> one,map<char,int> two){

	map<char,int> ans;
	for(auto i:one){
		if(two.find(i.first)!=two.end()){
			ans[i.first] = i.second+two[i.first];
		}else{
			ans[i.first] = i.second;
		}
	}

	for(auto i:two){
		if(one.find(i.first)==one.end()){
			ans[i.first] = i.second;
		}
	}

	return ans;

}


struct segment_tree{

	vector<map<char,int> > st;

	void init(int n){
		st.resize(4*n);
	}

	void build(int start,int end,int node){
		if(start==end){
			map<char,int> base;
			base[a[start]]=1;
			st[node] = base;
			return;
		}

		int mid = (start+end)/2;
		build(start,mid,2*node+1);
		build(mid+1,end,2*node+2);

		map<char,int> s;
		// s.insert(st[2*node+1].begin(),st[2*node+1].end());
		// s.insert(st[2*node+2].begin(),st[2*node+2].end());
		// st[node] = s;
		s = add(st[2*node+1],st[2*node+2]);
		st[node] = s;
	}

	map<char,int> query(int start,int end,int l,int r,int node){

		if (start > r || end < l) {
			map<char,int> base;
			return base;
		}
		// complete
		if (start >= l && end <= r) {
			return st[node];
		}
		// partial
		int mid = (start + end) / 2;
		map<char,int> q1 = query(start, mid, l, r, 2 * node + 1);
		map<char,int> q2 = query(mid + 1 , end, l, r, 2 * node + 2);
		map<char,int> m;
		// m.insert(q2.begin(),q2.end());
		m = add(q1,q2);
		return m;
	}

} G;


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n,q;
	cin>>n>>q;

	G.init(n);

	cin>>a;

	G.build(0,n-1,0);

	while(q--){
		int l,r;
		cin>>l>>r;
		map<char,int> s = G.query(0,n-1,l-1,r-1,0);
		int ans = 0;
		for(auto i:s){
			ans ^= i.second;
		}
		cout<<ans<<endl;
		// for(auto i:s){
		// 	cout<<i.first<<"-"<<i.second<<endl;
		// }
		// cout<<endl;
	}
}


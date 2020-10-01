#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	//cin>>t; while(t--){

	int n; cin >> n;
	vector<long long> prefix(n + 1, 0);
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		prefix[i + 1] = prefix[i] + x;
	}
	int begin = 0, end = 0;
	long long ans = 0;
	set<long long> s = {0};
	while(begin < n) {
		while(end < n && !s.count(prefix[end + 1])) {
			++end;
			s.insert(prefix[end]);
		}
		ans += end - begin;
		s.erase(prefix[begin]);
		++begin;
	}
	cout << ans << endl;

	//}
}


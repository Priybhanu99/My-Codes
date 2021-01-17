#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int n;
		cin >> n;
		vector<int> a(n);
		for (int j = 0; j < n; ++j) {
			cin >> a[j];
			--a[j];
		}
		int pos = 0;
		while (pos < n) {
			int nxt = min_element(a.begin() + pos, a.end()) - a.begin();
			int el = a[nxt];
			a.erase(a.begin() + nxt);
			a.insert(a.begin() + pos, el);
			if (pos == nxt) pos = nxt + 1;
			else pos = nxt;
		}
		for (auto it : a) cout << it + 1 << " ";
		cout << endl;
	}

}
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

	int t,n;
	cin>>t; while(t--){

		int a,b;
		cin>>a>>b;

		int x = max(a,b);
		int y = min(a,b);
		int ans = max(2*y,x);
		cout<<ans*ans<<"\n";

	}
}

// 16
// 16
// 4
// 9
// 64
// 9
// 64
// 40000

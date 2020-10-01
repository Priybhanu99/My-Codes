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

	int t;
	cin>>t; while(t--){

		int n,m;
		cin>>n>>m;

		int ans = 0;
		int rows = (n/2)*m;
		int nc = n%2;

		if(nc!=0){
			ans += (1+m)/2;
		}

		cout<<ans+rows<<"\n";

	}
}


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

		int n,k;
		cin>>n>>k;

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			ans += (a[i]>k) ? a[i]-k : 0;
		}

		cout<<ans<<"\n";

	}
}


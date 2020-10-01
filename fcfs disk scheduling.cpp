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
	//cin>>t; while(t--){

	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int start_pointer;
	cin>>start_pointer;

	int ans = 0;
	int curr = start_pointer;

	for (int i = 0; i < n; ++i)
	{
		ans += abs(a[i]-curr);
		curr = a[i];
	}

	cout<<ans;

	//}
}


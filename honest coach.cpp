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

		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}


		sort(a,a+n);

		int minm = INT_MAX;
		for (int i = 0; i < n-1; ++i)
		{
			minm = min(minm,abs(a[i]-a[i+1]));
		}

		cout<<minm<<"\n";

	}
}

// 1
// 0
// 2
// 999
// 50

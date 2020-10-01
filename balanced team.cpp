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

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	sort(a,a+n);

	int ans = 0;

	for(int i=0;i<n;i++){
		int x = upper_bound(a,a+n,a[i]+5)-(a+i);
		ans = max(ans,x);
	}

	cout<<ans;
}


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
	pair<int,int> a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].first;
		a[i].second = i+1;
	}

	sort(a,a+n);
	reverse(a,a+n);

	int ans = 0;
	for (int i = 0; i < n; i++){
		ans += a[i].first*i + 1;
	}

	cout<<ans<<"\n";
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i].second<<" ";
	}
	//}
}


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

	int n,x;
	cin>>n>>x;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	vector<int> prefix(n+1);
	prefix[0] = 0;

	for (int i = 0; i < n; ++i)
	{
		prefix[i+1] = prefix[i] + a[i];
	}

	int ans = 0;

	// for(auto i:prefix){
	// 	cout<<i<<" ";
	// }
	// cout<<"\n";

	for (int i = 1; i <= n; ++i)
	{
		int temp = prefix[i-1]+x;
		int index = lower_bound(prefix.begin(), prefix.end(),temp)-prefix.begin();

		if(index==prefix.size() || prefix[index]!=temp){
			index--;
		}

		// cout<<index<<" ";

		ans = max(ans,index-i+1);
	}

	// cout<<" :";

	cout<<ans;
}
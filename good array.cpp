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
	//cin>>t; while(t--){

	int n;
	cin>>n;

	P a[n];
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i].F;
		a[i].S = i;
		sum += a[i].F;
	}

	sort(a,a+n);

	vector<int> ans;

	sum -= a[n-1].F;
	if(sum!=a[n-1].F){
		int req = sum-a[n-1].F;
		for (int i = 0; i < n-1; ++i)
		{
			if(a[i].F==req){
				ans.pb(a[i].S+1);
			}
		}
	}

	sum -= a[n-2].F;
	if(sum==a[n-2].F){
		ans.pb(a[n-1].S+1);
	}

	cout<<ans.size()<<"\n";

	for(auto i:ans){
		cout<<i<<" ";
	}
	//}

}
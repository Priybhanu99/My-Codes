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
	for(int i=0;i<n;i++){
		cin>>a[i].F>>a[i].S;
	}

	int ans = -1;

	int l = INT_MAX,r=INT_MIN;


	for (int i = 0; i < n; ++i)
	{
		l = min(l,a[i].F);
		r = max(r,a[i].S);
	}

	for (int i = 0; i < n; ++i)
	{
		if(l==a[i].F && a[i].S==r){
			ans = i+1;
		}
	}

	cout<<ans<<"\n";
	//}

}
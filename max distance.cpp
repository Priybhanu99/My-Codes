#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool cmp(pair<int,int> a,pair<int,int> b){
	return a.first<b.first;
}

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
		a[i].second = i;
	}

	sort(a,a+n,cmp);

	int maxindex[n];
	int maxi = INT_MIN;
	for(int i = n-1;i>=0;i--){
		maxi = max(maxi,a[i].second);
		maxindex[i] = maxi;
	}

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans = max(ans,maxindex[i]-a[i].second);
	}

	cout<<ans;





	//}
}


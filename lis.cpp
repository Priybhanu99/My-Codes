#include <bits/stdc++.h>
using namespace std;

void solve(int *a,int n){

	int dp[n];
	fill(dp,dp+n,1);

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if(a[i]>=a[j]){
				int curlen = 1+dp[j];
				dp[i] = max(curlen,dp[i]);
			}
		}

		ans = max(ans,dp[i]);
	}

	cout<<ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t,n;
	//cin>>t; while(t--){

		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		solve(a,n);

	//}
}


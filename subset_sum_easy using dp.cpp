#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool sstt(int *a,int sum,int n){

	bool dp[n+1][sum+1];

	for(int i=0;i<=n;i++){
		dp[i][0] = true;
	}

	for(int i=1;i<=sum;i++){
		dp[0][i] = false;
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(a[i-1]>j){
				dp[i][j] = dp[i-1][j];
			}
			if(a[i-1]<=j){
				dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];
			}
		}
	}

	// for (int i = 0; i <=n; ++i)
	// {
	// 	for(int j=1;j<=sum;j++){
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	return dp[n][sum];
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n,sum;
	cin>>n>>sum;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	sort(a,a+n);

	bool ans = sstt(a,sum,n);
	cout<<ans;
}


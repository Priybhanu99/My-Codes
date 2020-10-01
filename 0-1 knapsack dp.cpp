#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e3;
int weight[N],size[N];
int dp[N][N];

int knapsack_dp(int n,int w){
	if(n==0||w<=0){
		return 0;
	}

	if(dp[n][w]!=-1){
		return dp[n][w];
	}

	return dp[n][w] = max(size[n]+knapsack_dp(n-1,w-weight[n]),knapsack_dp(n-1,w));
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n,capacity;
	cin>>n>>capacity;

	for (int i = 1; i <= n; ++i)
	{
		cin>>weight[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		cin>>size[i];
	}

	memset(dp,-1,sizeof(dp));
	cout<<knapsack_dp(n,capacity);


}


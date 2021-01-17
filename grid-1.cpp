#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

char a[1000][1000];

int mod = 1e9 + 7;

int ans = 0;

int dp[1000][1000];

int solve(int i,int j,int n,int m){
	if(i<0 || j<0){
		return 0;
	}

	if(i==0 && j==0){
		dp[i][j] = 1;
		return 1;
	}

	if(dp[i][j]!=-1){
		return dp[i][j]%mod;
	}

	if(a[i][j]=='#'){
		return 0;
	}else{

		return dp[i][j] = (solve(i-1,j,n,m)%mod + solve(i,j-1,n,m)%mod)%mod;
	}
}

int func(int n,int m){

	int dp[n][m];
	memset(dp,0,sizeof(dp));

	for (int i = 0; i < m; ++i)
	{
		if(a[0][i]=='#'){
			break;
		}else{
			dp[0][i] = 1;
		}
	}

	for(int i=0;i<n;i++){
		if(a[i][0] == '#'){
			break;
		}
		dp[i][0] = 1;
	}

	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if(a[i][j]=='#'){
				continue;
			}

			dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
		}
	}

	return dp[n-1][m-1]%mod;
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	//cin>>t; while(t--){

	int n,m;
	cin>>n>>m;


	memset(dp,-1,sizeof(dp));
	// char a[n][m];
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}

	

	cout<<solve(n-1,m-1,n,m);
	// cout<<dp[n-1][m-1];
	// cout<<func(n,m);
// 
	//}

}
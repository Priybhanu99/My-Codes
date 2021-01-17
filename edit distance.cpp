#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int solve(string a,string b){
	if(a.size()==0){
		return b.size();
	}

	if(b.size()==0){
		return a.size();
	}

	if(a[0]==b[0]){
		return solve(a.substr(1),b.substr(1));
	}else{
		return 1 + min(solve(a.substr(1),b),min(solve(a.substr(1),b.substr(1)),solve(a,b.substr(1))));
	}
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

	string a,b;
	cin>>a>>b;

	int n = a.size(),m=b.size();

	int dp[n+1][m+1];
	memset(dp,0,sizeof(dp));

	for (int i = 0; i <= n; ++i)
	{
		dp[i][0] = i;
	}

	for (int i = 0; i <= m; ++i)
	{
		dp[0][i] = i;
	}

	for (int i = 1; i <= n; ++i)
	{
		for(int j=1;j<=m;j++){
			if(a[i-1]==b[j-1]){
				dp[i][j] = dp[i-1][j-1];
			}else{
				dp[i][j] = 1 + min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
			}
		}
	}

	cout<<dp[n][m];

	//}

}
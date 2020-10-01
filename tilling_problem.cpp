#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e5;
int dp[N] ;

//dont forget to take mod
int noOfWays(int n,int m){
	if(n<m){
		return 1;
	}
	if(n==m){
		return 2;
	}

	if(dp[n]!=-1){
		return dp[n];
	}

	int a  = noOfWays(n-1,m);
	int b = noOfWays(n-m,m);
	dp[n] = a+b;
	return dp[n];
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	int m;
	fill(dp,dp+N,-1);

	//cout<<dp[328];
	cin>>t; while(t--){

		cin>>n>>m;

		int ans = noOfWays(n,m);
		cout<<ans<<endl;


	}
}


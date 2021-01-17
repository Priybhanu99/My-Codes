#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int dp[1000005];

int solve(int n){

	if(n<0){
		return 1e9;
	}

	if(n<=9){
		return 1;
	}

	if(dp[n]!=-1){
		return dp[n];
	}

	int temp = n;
	int ans = INT_MAX;

	while(temp){
		if(temp%10!=0){
			ans = min(ans,1+solve(n-(temp%10)));
		}
		temp/=10;
	}

	return dp[n] = ans;
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

	memset(dp,-1,sizeof(dp));
	int n;
	cin>>n;

	cout<<solve(n);

	
	//}

}
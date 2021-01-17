#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int mod = 1e9 + 7;
int dp[1000005];

int solve(int n){

	if(n==0){
		return 1;
	}

	if(dp[n]!=-1){
		return dp[n];
	}

	int temp = 0;
	for(int dice=1;dice<=6;dice++){
		if(n>=dice){
			temp += solve(n-dice);
		}
	}

	return dp[n] = temp%mod;
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

	int n;
	cin>>n;

	memset(dp,-1,sizeof(dp));

	cout<<solve(n);
	//{1,1,1,1},{1,1,2},{1,3},{1,2,1},{2,1,1},{2,2},{3,1}.{4}
	

	//}

}
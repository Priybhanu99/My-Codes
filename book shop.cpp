#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

map<P,int> dp;

int solve(int *val,int *pages,int i,int n,int W){
	if(i==n){
		return 0;
	}

	if(W<=0){
		return 0;
	}

	if(dp.count(make_pair(i,W))!=0){
		return dp[{i,W}];
	}

	int a = 0;
	if(val[i]<=W){
		a = pages[i] + solve(val,pages,i+1,n,W-val[i]);
	}

	return dp[{i,W}] = max(a, solve(val,pages,i+1,n,W));

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

	int n,W;
	cin>>n>>W;

	int val[n];
	for(int i=0;i<n;i++){
		cin>>val[i];
	}

	int pages[n];
	for(int i=0;i<n;i++){
		cin>>pages[i];
	}

	// memset(dp,-1,sizeof(dp));

	// int dp[n+1][W+1];

	cout<<solve(val,pages,0,n,W);

	//}

}
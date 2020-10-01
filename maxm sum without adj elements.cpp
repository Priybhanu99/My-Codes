#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int N = 1e5;
int dp[N];

int solve(vector<vector<int>> A,int curr,int n){

	if(curr==n){
		return 0;
	}
	int ans = 0;
	for(int i=curr;i<n;i++){

		if(dp[i]!=-1){
			ans = max(ans,dp[i]);
		}else{
			ans = max(ans,max(A[0][curr],A[1][curr])+solve(A,curr+2,n));
		}

	}

	dp[curr] = ans;

	return ans;
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
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	//}
}


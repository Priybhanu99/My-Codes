#include <bits/stdc++.h>
using namespace std;

#define int long long int

//const int N = 20000000;
int dp[20000008];

int solve(int n){
	if(n==1) return 0;

	if(dp[n]!=-1) return dp[n];

	int ans1=INT_MAX,ans2=INT_MAX,ans3=INT_MAX;
	ans1 = 1 + solve(n-1);
	if(n%2==0){
		ans2 = 1 + solve(n/2);
	}
	if(n%3==0){
		ans3 = 1 + solve(n/3);
	}

	int ans = min(ans1,min(ans2,ans3));
	dp[n] = ans;
	return ans;
}

void min_steps_bottomup(int n){

	dp[20000005]={};
	dp[0] = dp[1] = 0;

	for (int i = 2; i <= 20000000; ++i)
	{
		int ans1=INT_MAX,ans2=INT_MAX,ans3=INT_MAX;
		ans1 = 1+dp[i-1];
		if(i%2==0){
			ans2 = 1+dp[i/2];
		}
		if(i%3==0){
			ans3 = 1+dp[i/3];
		}

		dp[i] = min(ans1,min(ans2,ans3));
		
	}


}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	    #endif
	int t,n;
	int count = 0;

	fill(dp,dp+20000005,-1);
	min_steps_bottomup(20000005);
	cin>>t; while(t--){
		count++;
		cin>>n;
		
		//int ans = solve(n);
		cout<<"Case "<<count<<": "<<dp[n]<<endl;
		//min_steps_bottomup(n);

	}
}


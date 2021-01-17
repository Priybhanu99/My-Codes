#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int mod = 1e9 + 7;

int power(int a,int b){

	int ans = 1;

	while(b){
		if(b&1){
			ans = ((ans%mod)*(a%mod))%mod;
		}
		a = ((a%mod)*(a%mod));
		b/=2;
	}


	return ans%mod;


}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int dp[1000005] = {};
	dp[0] = 1;

	for (int i = 1; i < 1000005; ++i)
	{
		dp[i] = ((i%mod)*(dp[i-1]%mod))%mod;
	}
	int t;
	cin>>t; while(t--){

		int a,b;
		cin>>a>>b;

		int ans = dp[a];

		int temp = ((power(dp[b],mod-2)%mod) * (power(dp[a-b],mod-2)%mod)) ;
		cout<<((ans%mod)*(temp%mod))%mod<<"\n";
	}

}
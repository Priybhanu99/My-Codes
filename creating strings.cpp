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

	string s;
	cin>>s;

	int dp[1000005] = {};
	dp[0] = 1;

	for (int i = 1; i < 1000005; ++i)
	{
		dp[i] = ((i%mod)*(dp[i-1]%mod))%mod;
	}

	map<char,int> mp;
	for (int i = 0; i < s.size(); ++i){

		mp[s[i]]++;
	}

	int ans = dp[s.size()];
	int temp = 1;
	for(auto i:mp){
		temp = ((temp%mod)*(dp[i.S]%mod))%mod;
	}
	temp = power(temp,mod-2);
	ans = ((ans%mod)*(temp%mod))%mod;
	cout<<ans%mod;
}
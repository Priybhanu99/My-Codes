#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int mod = 1e9 + 7;

int sum_of_divisors(int n){
	int ans = 0;
	for (int i = 1; i*i <= n; ++i)
	{
		if(i*i==n){
			ans = (ans%mod + ((n/i)*i)%mod)%mod;
		}else{
			ans = (ans%mod + ((n/i)*i)%mod)%mod;
			ans = (ans%mod + ((n/(n/i))*(n/i))%mod)%mod;
		}
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

	int t;
	//cin>>t; while(t--){

	int n;
	cin>>n;

	cout<<sum_of_divisors(n);


	//}

}
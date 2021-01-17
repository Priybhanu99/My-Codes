#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int fun(int a,int b,int mod){

	int ans = 1;

	while(b){
		if(b&1){
			ans = ((ans%mod)*(a%mod))%mod;
		}
		a = (a*a)%mod;
		b = b>>1;
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
	cin>>t; while(t--){

		int a,b,c;
		cin>>a>>b>>c;

		int mod = 1e9 + 7;

		cout<<fun(a,fun(b,c,mod-1),mod)<<"\n";
	}

}
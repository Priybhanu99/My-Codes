#include <bits/stdc++.h>
using namespace std;

#define int long long int
int mod = 1000000007;


int multinv(int a,int b){
	int ans = 1;
	while(b){
		if(b&1){
			ans = (ans*a)%mod;
		}
		a = (a*a)%mod;
		b = b/2;
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

	int n,r;
	cin>>n>>r;

	int ans = 1;
	for(int i=0;i<r;i++){
		ans = ((ans%mod)*((n-i)%mod))%mod;
		ans = ((ans%mod)*(multinv(r-i,mod-2)%mod))%mod;
	}

	cout<<ans%mod;
}


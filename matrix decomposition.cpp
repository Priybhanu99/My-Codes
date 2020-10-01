#include <bits/stdc++.h>
using namespace std;

#define int long long int
int mod = 1e9+7;

int powr(int a,int b){
	int ans = 1;
	//while b !=0(doesnot contain any set bit)
	while(b>0){
		//if there is a set bit then b&1 = 1
		if(b&1){
			ans =(ans*a)%mod;
		}
		b = b>>1;
		a = (a*a)%mod;

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

		int n,a;
		cin>>n>>a;

		int p[n+1];
		p[0] = 1;
		p[1] = a;
		int ce = a;
		for (int i = 2; i <= n ; ++i)
		{
			p[i] = (powr((p[i-1]*ce),2*i-1)%mod);
			ce = (ce*p[i-1])%mod;
		}

		int ans = 0;
		for (int i = 1; i <= n; ++i)
		{
			//cout<<p[i]<<" ";
			ans = (ans+p[i])%mod;
		}

		cout<<ans%mod<<"\n";

	}
}


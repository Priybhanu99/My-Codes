#include <bits/stdc++.h>
using namespace std;

#define int long long int
int mod = 1e9 + 7;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	cin>>t; while(t--){

		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int ans = 1;
		for(int i =0;i<n-1;i++){
			
			if(a[i]>a[i+1]){
				ans = 0;
			}
			
			ans = ((ans%mod)*(int)pow(2,__builtin_popcount(a[i])%mod))%mod;
		}

		cout<<ans%mod<<"\n";

	}
}


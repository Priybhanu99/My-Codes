#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int a,b,n,s;
		cin>>a>>b>>n>>s;

		int x = (s/n)*n;
		int y = x/n;

		int ans = 0;
		if(a<=y){
			ans += n*a;
		}else{
			ans+= y*n;
		}

		if(s-ans<=b){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

	}
}

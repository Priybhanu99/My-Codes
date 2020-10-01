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

	int t,l,v,a,b;
	cin>>t; while(t--){

		cin>>l>>v>>a>>b;

		int ans  = (l/v);

		int count = (b/v) - ((a-1)/v);
		
		cout<<ans-count<<"\n";

	}
}


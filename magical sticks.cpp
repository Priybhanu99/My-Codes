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

	int t,n;
	cin>>t; while(t--){

		cin>>n;
		// if(n==1){
		// 	cout<<"1\n";
		// 	continue;
		// }

		int ans = ((n-1)/2)+1;
		// if(n==3){
		// 	ans++;
		// }

		cout<<ans<<"\n";


	}
}


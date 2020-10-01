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

	int t,n,a,b;
	cin>>t; while(t--){

		cin>>n;
		cin>>a>>b;
		
		string ans(a-b,'a');
		string req;
		for(int i=0;i<b;i++){
			req += char(97+i%26);
			ans = ans + char(97+i%26);
		}

		for(int i=0;i<n-a;i++){
			// ans = ans+ char(97+i%26);
			ans += req[i%req.size()];

		}
		// int i=a;
		// while(i<n){
		// 	ans += 
		// }

		cout<<ans<<"\n";

	}
}


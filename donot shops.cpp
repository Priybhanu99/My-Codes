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

		int a,b,c;
		cin>>a>>b>>c;

		int costb = c/b;

		int ans[2] = {};

		if(costb>=a){
			ans[1] = -1;
		}else{
			ans[1] = b;
		}

		if(a>=c){
			ans[0] = -1;
		}else{
			ans[0] = 1;
		}

		cout<<ans[0]<<" "<<ans[1]<<"\n";
	}
}


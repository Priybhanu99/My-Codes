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

		int x,y;
		cin>>x>>y;

		cin>>n;
		
		int s = n/x;
		//cout<<"s: "<<s<<" ";
		int ans = 0 ;
		if((s*x+y)>n){
			ans = s*(x)+y-x;
		}else{
			ans = s*x + y;
		}

		// for(int i=s*x-x;i<=n;i++){
		// 	if(i%x == y){
		// 		ans = i;
		// 	}
		// }
		cout<<ans<<"\n";


	}
}

// 12339
// 0
// 15
// 54306
// 999999995
// 185
// 999999998



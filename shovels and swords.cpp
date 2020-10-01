#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 

int solve(int a,int b){
	// cout<<a<<","<<b<<endl;
	if(a==0 || b==0){
		return 0;
	}
	if(a<0 || b<0){
		return INT_MIN;
	}

	return 1 + max(solve(a-1,b-2),solve(a-2,b-1));
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

		int a,b;
		cin>>a>>b;

		// if(a==0 || b==0){
		// 	cout<<"0\n";
		// 	continue;
		// }
		// int ans = 0 ;
		// if(a>b){

		// 	ans = min(a/2,b);
		// }else{
		// 	ans = min(a,b/2);
		// }

		// cout<<ans<<"\n";
		cout<<solve(a,b)<<"\n";
	}
}


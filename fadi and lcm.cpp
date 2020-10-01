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
	//cin>>t; while(t--){

	cin>>n;
	
	int ans = INT_MAX;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			if((i/__gcd(i,n/i) * n/i)== n){
				ans = max(i,n/i);
			}
		}
	}

	cout<<min(ans,n/ans)<<" "<<max(ans,n/ans);

	//}
}


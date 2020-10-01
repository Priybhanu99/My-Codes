#include <bits/stdc++.h>
using namespace std;

#define int long long int


int minsteps2(int n){
	if(n==1||n==0){
		return n;
	}

	int rem=1;
	while(rem*2<=n){
		rem *= 2;
	}

	int ans = 1+minsteps2(n-rem);
	return ans;
}

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
	int ans = minsteps2(n);
	cout<<ans<<endl;

	}
}


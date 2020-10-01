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

	int n;
	cin>>n;

	double ans = 0;
	while(n!=0){
		int t = 1;
		ans += (t*1.00)/n;
		n =n-1;
	}

	cout<<fixed<<setprecision(12)<<ans;
}


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

	int ans = 0;
	int mult = 5;

	while((n/mult)!=0){
		ans += n/mult;
		mult *= 5; 
	}

	cout<<ans;
}


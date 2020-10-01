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

	int n,k;
	cin>>n>>k;

	int x = __builtin_popcount(n);

	if(x==k){
		cout<<"YES\n";
		cout<<n<<"\n";
		continue;
	}

	if(x>k){
		cout<<"NO\n";
		continue;
	}


	


}


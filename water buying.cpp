#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int n,a,b;
		cin>>n>>a>>b;

		int ans = 0;

		if(n%2){
			ans += a;
			n--;
		}

		ans += (n/2)* min(2*a,b);

		cout<<ans<<"\n";
	}

}
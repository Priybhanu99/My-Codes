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

	int t;
	cin>>t; while(t--){

		int a,b,c;
		cin>>a>>b>>c;

		int na[] = {a-1,a,a+1};
		int nb[] = {b-1,b,b+1};
		int nc[] = {c-1,c,c+1};

		int ans = INT_MAX;

		for (int i = 0; i <= 2; ++i)
		{
			for(int j=0;j<=2 ;j++){

				for(int k = 0;k<=2;k++){
					ans = min(ans, abs(na[i]-nb[j])+ abs(nb[j]-nc[k]) + abs(na[i]-nc[k]));
				}
			}
		}
		
		cout<<ans<<"\n";

	}
}


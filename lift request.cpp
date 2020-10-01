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

		cin>>n;

		int q;
		cin>>q;

		int cf = 0;
		int ans = 0;

		for(int i=0;i<q;i++){
			int sp,ep;
			cin>>sp>>ep;

			ans += abs(cf-sp)+abs(ep-sp);
			cf = ep;
			//cout<<ans<<" ";

		}

		cout<<ans<<"\n";

	}
}


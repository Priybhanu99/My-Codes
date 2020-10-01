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

		int n,m,k;
		cin>>n>>m>>k;

		int no_of_cards_per_player = n/k;
		int ans = 0;
		if(no_of_cards_per_player>=m){

			ans = m;

		}else{
			int mxm = no_of_cards_per_player;
			int rem = k-1;
			int rem_m = m - no_of_cards_per_player;

			int mnm = (rem_m/rem);

			if(rem_m%rem!=0){
				mnm++;
			}

			ans = mxm - mnm;

		}

		cout<<ans<<"\n";
	}
}


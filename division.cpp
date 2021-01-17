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

		int p,q;
		cin>>p>>q;

		if(p%q!=0){
			cout<<p<<"\n";
		}else{
			int ans = 0;
			for (int i = sqrt(p); i>=2; --i)
			{
				if(p%i==0){
					// cout<<i<<" ";
					if((q%i)!=0){
						ans = max(ans,i);
					}
					if((q%(p/i)!=0)){
						ans = max(ans,(p/i));
					}

					break;
				}
			}

			cout<<ans<<"\n";
		}

	}

}
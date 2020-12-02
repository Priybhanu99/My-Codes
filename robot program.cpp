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

		int x,y;
		cin>>x>>y;

		int ans = 2*min(x,y);
		// if(x%2){
		// 	ans--;
		// }

		int temp =abs(x-y);
		// if(temp>1){
		// 	ans++;
		// }

		for(int i=0;i<temp;i++){
			if(i==0){
				ans++;
			}else{
				ans+=2;
			}
		}
		// ans += max(0LL,2*(temp-1));
		// if(x%2){
		// 	ans--;
		// }


		cout<<ans<<"\n";
	}

}
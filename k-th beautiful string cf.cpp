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

		int k;
		cin>>n>>k;

		int b1_index = floor(float(sqrt(2*k))+0.5);
		int b2_sp = ((b1_index-1)*b1_index)/2 + 1;

		int b2_index = k - b2_sp;

		//cout<<b1_index<<" "<<b2_index<<"\n";

		string ans;
		for(int i=0;i<n;i++){
			if(i==b1_index || i== b2_index){
				ans = "b"+ ans;
			}else{
				ans = "a" + ans;
			}
		}

		cout<<ans<<"\n";

	}
}


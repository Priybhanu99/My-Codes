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
		
		int power = log2(n);
		int x = pow(2,power);

		int ans = 2*x - 1;
		cout<<"\n";

		for(int i=x;i<n;i++){
			int prev = i;
			int curr = i+1;

			int count = 0;
			while(prev!=0 || curr!=0){
				if(prev&1 != curr&1){
					count++;
				}

				prev = prev/2;
				curr = curr/2;
			}

			cout<<count<<",";

			ans += count;
		}

		// cout<<power<<" "<<x<<"\n";
		cout<<ans<<"\n";
	}
}


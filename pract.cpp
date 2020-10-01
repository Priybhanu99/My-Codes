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

		int nod = 0;
		int temp = n;
		while(temp>0){
			temp = temp/10;
			nod++;
		}

		int i=0;
		int mult = 1;

		cout<<nod<<"\n";

		int ans = 0;

		while(n>0){
			int rem = n%10;
			if((nod-i-1)%2==0){
				ans += rem*mult;
				mult *= 10;
			}
			n = n/10;
			i++;
		}
		
		cout<<ans<<"\n";
	}
}


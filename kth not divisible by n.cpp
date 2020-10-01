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

		int n,k;
		cin>>n>>k;
			

		int kthpair = k/(n-1);
		if(k%(n-1)==0){
			kthpair--;
		}
		int nos_upto_kthpair = kthpair*(n);
		int non_divisible = kthpair*(n-1);

		//int curr_n = nos_upto_kthpair
		int ans = nos_upto_kthpair+(k-non_divisible);
		cout<<ans<<"\n";

	}
}


// 10
// 15
// 1999999999
// 113
// 1000000001
// 1

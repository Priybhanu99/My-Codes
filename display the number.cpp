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
		string ans="";

		int count = 0;
		while(n>=2){
			ans += '1';
			n-=2;
			count++;
		}

		if(n==1){
			ans[ans.size()-1] = '7';
		}

		reverse(ans.begin(),ans.end());


		cout<<ans<<"\n";

	}
}


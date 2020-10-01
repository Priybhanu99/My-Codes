#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t; while(t--){

		int n,k;
		cin>>n>>k;

		int ans = 0;
		ans = k*(n/k);

		int x = n%k;
		if(x<=floor(k/2)){
			ans += x;
		}else{
			ans += floor(k/2);
		}

		cout<<ans<<endl;
	}
}


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

		int x,n,m;
		cin>>x>>n>>m;

		bool flag = true;

		while(x>20 && n>0){
			x = x/2 + 10;
			n--;
		}

		if((x-10*m)<=0){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

	}
}
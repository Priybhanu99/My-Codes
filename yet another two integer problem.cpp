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

		int a,b;
		cin>>a>>b;

		int ans = (abs(a-b))/10;
		if(abs(a-b)%10){
			ans++;
		}
		cout<<ans<<"\n";

	}

}

// 0
// 3
// 2
// 92
// 87654322
// 9150

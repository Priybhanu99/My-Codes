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

		int n,c0,c1,h;
		cin>>n>>c0>>c1>>h;

		

		string s;
		cin>>s;

		int n0=0,n1=0;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='0'){
				
				n0 ++;
			}else{
				n1++;
			}
		}

		int ans = n0*c0 + n1*c1;

		if(c0<c1){
			ans = min(ans,n1*h + n*c0);
		}else if(c0>c1){
			ans = min(ans,n0*h + n*c1);
		}else{
			// ans = n0*c0 + n1*c1;
		}

		cout<<ans<<"\n";

	}

}

// 3
// 52
// 5
// 10
// 16
// 22

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

		int a[3],b[3];

		for (int i = 0; i < 3; ++i)
		{
			cin>>a[i];
		}

		for (int i = 0; i < 3; ++i)
		{
			cin>>b[i];
		}


		int ans = 0;

		ans += 2*(min(a[2],b[1]));
		int mnm = min(a[2],b[1]);

		a[2] -= mnm;
		b[1] -= mnm;

		mnm = min(b[2],a[0]);
		b[2] -= mnm;
		a[0] -= mnm;

		mnm = min(a[1],b[1]);
		a[1] -= mnm;
		b[1] -= mnm;

		mnm = min(a[2],b[2]);
		a[2] -= mnm;
		b[2] -= mnm;

		//a[1] , b[2]
		ans -= 2*min(a[1],b[2]);


		// ans += min(a[1],b[1]);

		cout<<ans<<"\n";
	}

}
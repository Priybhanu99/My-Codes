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
		int a[4*n];
		for(int i=0;i<4*n;i++){
			cin>>a[i];
		}

		sort(a,a+4*n);
		//unique(a,a+4*n);

		bool flag = true;
		int x = 4*n;
		int y = a[0]*a[4*n-1];
		for (int i = 0; i < n; ++i) {
			int lv = i * 2;
			int rv = 4 * n - (i * 2) - 1;
			if (a[lv] != a[lv + 1] || a[rv] != a[rv - 1] || a[lv] * 1ll * a[rv] != y) {
				flag = false;
			}
		}

		if(flag == true){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

	}
}


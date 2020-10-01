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
	int c = 0;
	cin>>t; while(t--){

		c++;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int ans = 0;
		for(int i=1;i<n-1;i++){
			if(a[i]>a[i-1] && a[i]>a[i+1]){
				ans++;
			}
		}

		cout<<"Case #"<<c<<": "<<ans<<"\n";


	}
}


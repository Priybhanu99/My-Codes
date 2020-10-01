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
		int q;
		cin>>q;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		for(int i=0;i<q;i++){
			int p;
			cin>>p;
			int even = 0;

			for(int i=0;i<n;i++){
				int x = p^a[i];
				int count = __builtin_popcount(x);
				if(count%2==0){
					even++;
				}
			}

			cout<<even<<" "<<n-even<<endl;
		}

	}
}


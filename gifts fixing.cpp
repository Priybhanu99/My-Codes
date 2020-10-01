#include<bits/stdc++.h>
using namespace std;

int main(){

	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	    #endif

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;


		int a[n],b[n];

		int mina= INT_MAX,minb = INT_MAX;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mina = min(mina,a[i]);
		}

		for(int i=0;i<n;i++){
			cin>>b[i];
			minb = min(minb,b[i]);
		}

		long long int ans = 0;
		for(int i=0;i<n;i++){

		 	long long int diff = max(a[i]-mina,b[i]-minb);
			ans += diff;

			// cout<<diff<<" ";
		}
		// cout<<"\n";
		cout<<ans<<"\n";
	}
}
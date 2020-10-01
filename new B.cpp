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
		int d;
		cin>>d;
		int a[n];
		int mod[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			//mod[i] = a[i]%d;
		}
		a[n-1] = (d/a[n-1])*a[n-1];

		for(int i = n-2;i>=0;i--){
			a[i] = (a[i+1]/a[i])*a[i];
		}
		cout<<"Case #"<<c<<": "<<a[0]<<"\n";


	}
}


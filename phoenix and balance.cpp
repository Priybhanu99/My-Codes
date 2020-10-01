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
		int a=0;
		int b=0;

		for(int i=1;i<=n/2-1;i++){
			a+=pow(2,i);
		}

		for(int i=n/2;i<=n-1;i++){
			b+=pow(2,i);
		}

		a+= pow(2,n);

		cout<<abs(a-b)<<"\n";

	}
}


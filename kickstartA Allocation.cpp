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
	int b;
	int x = 0;
	cin>>t; while(t--){

		x++;
		cin>>n>>b;

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		cout<<"Case #"<<x<<": ";
		sort(a,a+n);
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]<=b){
				b -= a[i];
				count++;
			}
			if(b<0){
				break;
			}
		}

		cout<<count<<"\n";

	}
}


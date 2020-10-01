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
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		bool inc = false;
		int i;
		for(i=0;i<n;i++){
			if(inc==false && a[i]<a[i+1]){
				break;
			}
			if(a[i]<a[i+1]){
				inc = true;
			}else{
				inc = false;
			}
		}

		for(;i>0;i--){
			swap(a[i],a[i-1]);
		}

		for (int i = 0; i < n; ++i)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";

	}
}

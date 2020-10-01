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
	//cin>>t; while(t--){

	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}


	int index = 0;
	
	for (int i = 0; i < n-1; ++i)
	{
		if(a[i]>=a[i+1]){
			index = i+1;
		}
	}

	for(int i=index-1;i>=0;i--){
		if(a[i]<a[i+1]){

		}else{
			a[i] = a[i+1]-1;
			if(a[i]<0){
				a[i] = 0;
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		//cout<<a[i]<<" ";
		ans += a[i];
	}

	cout<<ans;

	//}
}


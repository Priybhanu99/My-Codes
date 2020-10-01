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
	//cin>>t; while(t--){

	int n;
	cin>>n;

	int a[n];
	// int b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		// b[i] = a[i];
	}

	sort(a,a+n);
	int index = 0;

	int ans[n] = {};

	int count = 0;

	for(int i=1;i<n;i+=2){
		ans[i] = a[index++];
		// count++;
	}


	for(int i=0;i<n;i+=2){
		ans[i] = a[index++];
	}


	count = 0;
	for (int i = 1; i < n-1; i+=2)
	{
		if(ans[i-1]>ans[i] && ans[i]<ans[i+1]){
			count++;
		}
	}

	cout<<count<<"\n";

	for (int i = 0; i < n; ++i)
	{
		cout<<ans[i]<<" ";
	}



	//}

}
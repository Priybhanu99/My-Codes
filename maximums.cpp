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

	// int t,n;
	// cin>>t; while(t--){
	int n;
	cin>>n;

	int b[n];
	for(int i=0;i<n;i++){
		cin>>b[i];
	}	


	// int a[n];
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		b[i] += sum;
		sum = max(sum,b[i]);
	}


	for (int i = 0; i < n; ++i)
	{
		cout<<b[i]<<" ";
	}

	cout<<"\n";


	// }
}


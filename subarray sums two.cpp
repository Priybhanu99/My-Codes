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

	int n,x;
	cin>>n>>x;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	vector<int> prefix(n+1,0);
	for (int i = 0; i < n; ++i)
	{
		prefix[i+1] = prefix[i] + a[i];
		// cout<<prefix[i+1]<<" ";
	}
	// cout<<"\n";

	int count = 0;

	map<int,int> mp;
	for (int i = 0; i <= n; ++i)
	{
		int req = prefix[i]-x;
		if(mp.count(req)!=0){
			// cout<<"found\n";
			count += mp[req];
		}else{
			// cout<<"not found\n";
		}

		mp[prefix[i]] ++;
	}

	cout<<count;
	//}

}
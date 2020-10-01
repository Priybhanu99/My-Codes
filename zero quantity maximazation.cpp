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
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}

	map<float,int> map;
	int x = 0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]==0 && b[i]==0){
			x++;
			continue;
		}
		if(a[i]==0){
			if(b[i]==0) x++;
			continue;
		}
		float x = -(float)(b[i]/(a[i]*1.000000000));
		//cout<<x<<" ";
		map[x]++;
	}

	
	int ans = 0;
	for(auto i:map){
		if(i.second>ans){
			ans = i.second;
		}
	}

	ans += x;
	cout<<ans;

	//}
}


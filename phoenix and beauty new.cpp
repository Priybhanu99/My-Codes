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

		int k;
		cin>>k;

		map<int,int> map;

		vector<int> a(n);
		vector<int> ans;

		for(int i=0;i<n;i++){
			cin>>a[i];
			if(map.count(a[i])==0){
				ans.push_back(a[i]);
				map[a[i]]++;
			}
		}

		if(map.size()>k){
			cout<<"-1\n";
			continue;
		}

		for (int i = 0; i < n && ans.size()<k; ++i)
		{
			ans.push_back(a[i]);
		}

		cout<<n*k<<"\n";

		for(int i=0;i<n;i++){
			for(auto j:ans){
				cout<<j<<" ";
			}
		}

		// cout<<ans.size()<<"\n";

		// for(auto i:ans){cout<<i<<" ";}
			cout<<"\n";



	}
}


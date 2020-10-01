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

	int t;
	cin>>t; while(t--){

		int n,m;
		cin>>n>>m;
		int a[n];
		//int temp[n];

		for(int i=0;i<n;i++){
			cin>>a[i];
			//temp[i] = a[i];
		}

		vector<int> p(m);
		for (int i = 0; i < m; ++i)
		{
			cin>>p[i];
		}


		vector<int> ans;

		bool flag = true;

		//sort(temp,temp+n,comp);

		for (int i = 0; i < n-1; ++i)
		{
			if(a[i]>a[i+1]){
				ans.push_back(i+1);
			}
		}

		sort(ans.begin(), ans.end());

		for(int i=0;i<ans.size();i++){
			if(ans[i]!=p[i]){
				flag = false;
			}
		}

		if(flag){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

		// for(auto i:ans){
		// 	cout<<i<<" ";
		// }

		// cout<<"\n";


	}
}


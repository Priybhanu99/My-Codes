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


		vector<int> ans;
		ans.push_back(a[0]);
		
		bool inc =  false,dec = false;

		if(a[0]-a[1]>0){
			dec = true;
		}else{
			inc = true;
		}
		

		for (int i = 1; i < n; ++i)
		{
			// if(inc){
			// 	while(a[i]>a[i-1] && i<n){
			// 		i++;
			// 	}
			// 	inc = false;
			// 	dec = true;


			// 	ans.push_back(a[i-1]);

			// }
			// if(dec){
			// 	while(a[i]<a[i-1] && i<n){
			// 		i++;
			// 	}
			// 	inc = true;
			// 	dec = false;
			// 	ans.push_back(a[i-1]);

			// }

			if(inc && a[i]<a[i-1]){
				inc = false;
				ans.push_back(a[i-1]);
				dec = true;
			}else if(dec && a[i]>a[i-1]){
				inc = true;
				ans.push_back(a[i-1]);
				dec = false;
			}

		}

		ans.push_back(a[n-1]);
		cout<<ans.size()<<"\n";
		for(auto i:ans){
			cout<<i<<" ";
		}
		cout<<"\n";


	}
}


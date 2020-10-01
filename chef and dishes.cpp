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
		map<int,int> dish;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(dish.count(a[i])==0){
				dish[a[i]] = i;
			}
		}

		int mx = INT_MIN;
		int ans= 0;

		// for(auto type:dish){
		// 	cout<<type.first<<" "<<type.second<<"\n";
		// }

		for(auto type:dish){
			int i = type.second;
			int count = 0;
			for(;i<n;i++){
				
				if(a[i]==type.first){
					count++;
					i++;
				}
			}

			if(count>mx){
				mx = count;
				ans = type.first;
				//cout<<ans<<" "<<count<<"\n";
			}
		}

		cout<<ans<<"\n";



	}
}


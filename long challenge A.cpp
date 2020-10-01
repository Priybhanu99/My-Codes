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

		vector<int> index[100];
		index[0].push_back(a[0]);

		int count = 0;
		for(int i=1;i<n;i++){
			if(a[i]-a[i-1]<=2){
				index[count].push_back(a[i]);
			}else{
				count++;
				index[count].push_back(a[i]);
			}
		}

		// for(int i=0;i<n;i++){
		// 	if(index[i].size()==0){
		// 		continue;
		// 	}
		// 	for(auto j:index[i]){
		// 		cout<<j<<" ";
		// 	}
		// 	cout<<"\n";
		// }

		int mn = INT_MAX;
		int mx = INT_MIN;
		for(auto i:index){

			if(i.size()==0){
				continue;
			}
			if(i.size()<mn){
				mn = i.size();
			}
			if(i.size()>mx){
				mx = i.size();
			}
		}

		cout<<mn<<" "<<mx<<"\n";



	}
}


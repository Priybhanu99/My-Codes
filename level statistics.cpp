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
		pair<int,int> a[n];
		for(int i=0;i<n;i++){
			cin>>a[i].first;
			cin>>a[i].second;
		}

		bool flag = true;

		for (int i = 0; i < n; ++i)
		{
			if(i==0){
				if(a[i].first<a[i].second){
					flag = false;
					//cout<<"hi";
					break;
				}
				continue;
			}

			if(a[i].first<a[i-1].first ||a[i].second<a[i-1].second){
				flag = false;
				// cout<<"hi1";
				// cout<<i;
				break;
			}

			// if(a[i].first<a[i].second){
			// 	flag = false;
			// 	//cout<<"hi2";
			// 	break;
			// }

			if(a[i].first-a[i-1].first < a[i].second - a[i-1].second){
				flag = false;
				break;
			}


		}

		if(flag == true){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
}


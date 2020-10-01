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

		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			int ele = 0;
			int sum = 0;
			int no_of_ele = 0;
			for(int j=0;j<n;j++){
				if(j==i){
					sum = 0;
					ele = i+1;
					no_of_ele = 0;
					continue;
				}
				sum += a[j];
				no_of_ele++;
				if(sum>a[i]){
					sum -= a[ele];
					no_of_ele--;
					ele++;
				}
				if(sum==a[i]&&no_of_ele>=2){
					count++;
					break;
				}
			}
		//cout<<count<<" ";
		}
		//cout<<"\n";
		cout<<count<<"\n";

	}
}

// 5
// 1
// 0
// 4
// 0

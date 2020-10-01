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

		int n,k;
		cin>>n>>k;

		int a[n];
		int count_odd = 0;


		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2==1){
				count_odd++;
			}
		}

		if((count_odd & 1) != (k&1) || count_odd<k){
			cout<<"NO\n";
			continue;
		}

		vector<int> ans;
		int sum = 0;
		int count = 1;
		for (int i = 0; i < n; ++i)
		{	
			if(count>k-1){
				break;
			}
			sum += a[i];
			if(a[i]%2==1){
				ans.push_back(i+1);
				sum  = 0;
				count++;
			}
		}
		ans.push_back(n);

		cout<<"YES\n";
		for(auto i:ans){
			cout<<i<<" ";
		}
		cout<<"\n";

	}
}


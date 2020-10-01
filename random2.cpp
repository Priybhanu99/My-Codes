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
		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			sum += a[i];
		}

		int mean = sum/n;
		int maxm = INT_MIN;
		for (int i = 0; i < n; ++i)
		{
			if(abs(a[i]-mean)>maxm){
				maxm = a[i]-mean;
			}
		}

		cout<<mean<<" "<<maxm<<"\n";
		if(maxm<=k){
			cout<<mean + abs(k-maxm)<<"\n";
		}else{
			cout<<"-1\n";
		}
	}
}


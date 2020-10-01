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

		int mean = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mean += a[i];
		}

		mean = mean/n;

		//cout<<mean<<" ";

		int minm = INT_MAX;
		int maxm = INT_MIN;

		for (int i = 0; i < n; ++i)
		{
			if(a[i]<minm){
				minm = a[i];
			}
			if(a[i]>maxm){
				maxm = a[i];
			}
		}

		if(minm+k==maxm-k){
			cout<<minm+k<<"\n";
		}else{
			int diff = maxm-k-minm-k;
			if(diff>0){
				cout<<"-1\n";
			}else{
				cout<<minm+k<<"\n";
			}
		}

	}
}


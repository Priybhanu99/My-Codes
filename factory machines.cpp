#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	//cin>>t; while(t--){

	int n,x;
	cin>>n>>x;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int l = 1,r=1e18;
	while(l<r){
		int mid = (l+r)/2;
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			count +=min(mid/a[i],(long long)1e9);
		}

		if(count>=x){
			r = mid;
		}else{
			l = mid+1;
		}
	}

	cout<<l;

	//}

}
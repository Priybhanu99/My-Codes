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
	cin>>t; while(t--){

		int n;
		cin>>n;

		int a[n];
		int mean = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mean += a[i];
		}

		sort(a,a+n);
		int mxm = 0;
		
		for(int i=2;i<=2*n;i++){

			int ans = 0;
			int l=0,r=n-1;

			while(l<r){
				if(a[l]+a[r]==i){
					ans++;
					l++;
					r--;
				}else if(a[l]+a[r]<i){
					l++;
				}else{
					r--;
				}
			}

			mxm = max(mxm,ans);
		}

		cout<<mxm<<"\n";

	}

}
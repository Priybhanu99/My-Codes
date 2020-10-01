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

		sort(a,a+n);

		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<a[i]<<" ";
		// }
		// cout<<endl;

		int ans = a[0]*a[n-1];
		int l=0,r=n-1;

		bool flag = true;
		while(l<=r){
			if(ans!=(a[l]*a[r])){
				cout<<"-1"<<endl;
				flag = false;
				break;
			}else{
				ans = a[l]*a[r];
				l++;
				r--;
			}
		}

		if(flag){
			cout<<ans<<endl;
		}




	}
}


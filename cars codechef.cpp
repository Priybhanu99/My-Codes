#include <bits/stdc++.h>
using namespace std;

#define int long long int
int mod = 1e9+7;

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
		int sum = 0;

		sort(a,a+n,[](int x,int y){ return x>y;});
		for (int i = 0; i < n; ++i)
		{
			if(a[i]-count>0){
				sum =(sum + a[i]-count) % mod;
				count ++;
			}else{
				break;
			}
			
		}

		cout<<sum<<"\n";

	}
}


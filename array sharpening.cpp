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

		if(n==1){
			cout<<"Yes\n";
			continue;
		}

		int inc = 0;
		bool flag = true;

		for (int i = 1; i < n; ++i)
		{
			if(a[i-1]>=a[i]){
				inc = 1;
			}

			if(inc == 1){
				if(a[i-1]<=a[i]){
					
					a[i] = a[i]-(a[i]-a[i-1])-1;

					if(a[i]<0){
						flag = false;
						break;
					}
				}

			}
		}

		if(flag == true){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}
	}
}


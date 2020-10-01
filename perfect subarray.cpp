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
	int tc=0;
	cin>>t; while(t--){

		tc++;
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int ans = 0;
		for (int i = 0; i < n; ++i)
		{	
			for(int j=i;j<n;j++){

				int num = 0;
				for(int k=i;k<=j;k++){
					num += a[k];
				}
				int x = sqrt(num);
				if(x*x==num){
					ans++;
				}

			}			
		}

		cout<<"Case #"<<tc<<": "<<ans<<"\n";

	}
}


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
	int tc = 0;
	cin>>t; while(t--){

		tc++;
		int n,m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int ans = 0;

		for (int i = 0; i < n; ++i)
		{
			if(a[i]==m){
				bool flag = true;
				int j;
				
				for(j=i+1;j<i+m && j<n;j++){
					if(a[j]!=a[j-1]-1){
						flag = false;
						break;
					}
				}

				if(a[j-1]!=1){
					flag = false;
				}
				

				if(flag){
					ans++;
					i = j-1;
				}
			}
		}

		cout<<"Case #"<<tc<<": "<<ans<<"\n";

	}
}


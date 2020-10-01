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
	int x = 0;
	cin>>t; while(t--){

		x++;
		cin>>n;
		int a[n][n];
		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}

		int trace = 0;
		int rep_r = 0;
		int rep_c = 0;

		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<n;j++){
				if(i==j){
					trace += a[i][j];
				}
			}
		}

		for (int i = 0; i < n; ++i)
		{
			int index[n+1];
			memset(index,0,sizeof(index));
			for(int j=0;j<n;j++){
				
				if(index[a[i][j]] == 0){
					index[a[i][j]] = 1;
				}else{
					rep_r ++;
					break;
				}
			}
		}

		for (int i = 0; i < n; ++i)
		{
			int index[n+1];
			memset(index,0,sizeof(index));
			for(int j=0;j<n;j++){
				if(index[a[j][i]] == 0){
					index[a[j][i]] = 1;
				}else{
					rep_c ++;
					break;
				}
			}
		}

		cout<<"Case #"<<x<<": "<<trace<<" "<<rep_r<<" "<<rep_c<<"\n";
	}
}


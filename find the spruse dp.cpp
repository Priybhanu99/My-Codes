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

		int n,m;
		cin>>n>>m;

		char a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}

		int dp[n][m];
		memset(dp,0,sizeof(dp));

		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<m;j++){
				if(a[i][j]=='.'){
					dp[i][j] = 0;
					continue;
				}

				int l = 0;
				for(int x = j-1;x>=0;x--){
					if(a[i][x]!='*'){
						break;
					}

					l++;

				}

				int r = 0;
				for(int x = j+1;x<m;x++){
					if(a[i][x]!='*'){
						break;
					}
					r++;
				}

				int temp = min(l,r);

				if(i==0){
					dp[i][j] = 1;
				}else{
					if(temp>=dp[i-1][j]){
						dp[i][j] = 1+ dp[i-1][j];
					}else{
						dp[i][j] = temp+1;
					}
				}
			}
		}

		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<m;j++){
				// cout<<dp[i][j]<<" ";
				ans += dp[i][j];
			}
			// cout<<"\n";
		}

		cout<<ans<<"\n";
	}

}
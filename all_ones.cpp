#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e3;
int a[N][N];
int n,m;

int find_maxsize(int row,int col){

	int dp[n][m];
	memset(dp,sizeof(dp),0);

	int maxm = 0;
	for (int i = 0; i <n; ++i)
	{
		for (int j=0;j<m;j++)
		{
			if(i==0||j==0){
				dp[i][j]=a[i][j];
			}else{
				if(a[i][j]==0){
					dp[i][j] = 0;
				}else{
					int x,y,z;
					x = a[i-1][j-1];
					y = a[i-1][j];
					z = a[i][j-1];
					if(x==y==z==1){
						dp[i][j] = 1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
					}else{
						dp[i][j] = 1;
					}

					maxm = max(maxm,dp[i][j]);
				}

			}
		}
	}

	for (int i = 0; i <n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}


	return maxm;

}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif


	cin>>n>>m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>a[i][j];
		}
	}



	int ans = find_maxsize(0,0);
	cout<<ans;
}


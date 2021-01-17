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

	int n;
	cin>>n;

	string s;
	cin>>s;

	// vector<vector<int>> dp(n,vector<int>(3));
	int dp[n][3];
	memset(dp,0,sizeof(dp));

	dp[0][0] = (s[0]=='R')?0:1;
	dp[0][1] = (s[0]=='G')?0:1;
	dp[0][2] = (s[0]=='B')?0:1;


	vector<char> color{'R','G','B'};
	for (int i = 1; i < n; ++i)
	{
		for(int j=0;j<=2;j++){
			int diff = (s[i]==color[j])?0:1;
			int x = INT_MAX;
			for(int k=0;k<=2;k++){
				if(j==k){continue;}
				x = min(x,dp[i-1][k]);
			}

			dp[i][j] = diff + x;
		}
	}

	// for (int i = 0; i < n; ++i)
	// {
	// 	for(int j=0;j<=2;j++){
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }
	int rv  = (min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2])));
	cout<<rv<<"\n";

	string ans;
	int x = 0;
	for(int i=0;i<=2;i++){
		if(dp[n-1][i]==rv){
			x = i;
		}
	}
	ans += color[x];

	for(int i=n-1;i>0;i--){
		int index = 0;
		int mnm = INT_MAX;
		for(int j=0;j<=2;j++){
			if(j==x){
				continue;
			}
			if(dp[i-1][j]<mnm){
				mnm = dp[i-1][j];
				index = j;
			}
		}
		ans += color[index];
		x = index;
	}
	reverse(ans.begin(), ans.end());
	cout<<ans;


		//}

}
#include <bits/stdc++.h>
using namespace std;

#define int long long int
int dp[2020][2020][8];
int one[2020],two[2020];
int n,m,k;

int findlcs(int i,int j,int k){
	if(i==n||j==m){
		return 0;
	}

	if(dp[i][j][k]!=-1){
		return dp[i][j][k];
	}

	int res=0;
	if(one[i]==two[j]){
		res = 1+findlcs(i+1,j+1,k);
	}else{
		int a=0,b=0;
		if(k>0){
			a = 1+findlcs(i+1,j+1,k-1);
		}
		b = max(findlcs(i+1,j,k),findlcs(i,j+1,k));
		res = max(a,b);
	}

	return dp[i][j][k] = res;
}


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	cin>>n>>m>>k;

	for (int i = 0; i < n; ++i)
	{
		cin>>one[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>two[i];
	}

	memset(dp,-1,sizeof(dp));
	int ans = findlcs(0,0,k);
	cout<<ans;


}


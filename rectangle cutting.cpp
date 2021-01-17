#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int dp[500][500];
int solve(int x,int y){
	if(x==y){
		return 0;
	}

	if(dp[x][y]!=-1){
		return dp[x][y];
	}	

	int temp = min(x,y);
	return dp[x][y] = 1 + solve(temp,max(x,y)-temp);
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	memset(dp,-1,sizeof(dp));
	int x,y;
	cin>>x>>y;

	cout<<solve(x,y);

}
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int dp[1005][1005];
int mod = 1e9 + 7;

int solve(string *a,int i,int j,int n){
	if(i>=n || j>=n){
		return 0;
	}
	if(i==n-1 && j==n-1){
		if(a[i][j]=='.'){
			return 1;
		}else{
			return 0;
		}
	}

	if(dp[i][j]!=-1){
		return dp[i][j]%mod;
	}

	if(a[i][j]=='*'){
		return 0;
	}


	return dp[i][j] = (solve(a,i+1,j,n) % mod + solve(a,i,j+1,n)%mod)%mod;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	//cin>>t; while(t--){

	memset(dp,-1,sizeof(dp));
	int n;
	cin>>n;

	string a[n];
	for(int i=0;i<n;i++){
		string s;
		cin>>s;

		a[i] = s;
	}

	cout<<solve(a,0,0,n);

	//}

}
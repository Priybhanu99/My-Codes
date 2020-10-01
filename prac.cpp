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

	

	int n;
	cin>>n;

	
	int a[n][2];
	int dp[n+1][2];
	 
	for(int i=0;i<n;i++){
		cin>>a[i][0];
		cin>>a[i][1];
	}

	memset(dp,0,sizeof(dp));

	

	

}
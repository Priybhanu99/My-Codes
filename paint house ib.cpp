#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int dp[10005];


int func(vector<vector<int>> A,int color,int i,int n){
	if(i==n){

		return 0;
	}
	if(dp[i]!=-1){
		return dp[i];
	}
	int ans = 1000000009;
	for(int x = 0;x<3;x++){
		if(x==color){
			continue;
		}
		ans = min(ans,A[i][x] + func(A,x,i+1,A.size()));
	}
	dp[i] = ans;
	return ans;
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
	vector<vector<int>> A{{2,3,4},{10,11,12}};

	cout<<func(A,-1,0,A.size());

	//}

}
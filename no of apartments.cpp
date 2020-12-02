#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

// struct ap{
// 	int a,b,c;
// };

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	bool dp[1005];
	memset(dp,false,sizeof(dp));

	dp[3] = true;
	dp[5] = true;
	dp[7] = true;

	int ans[1000][3];
	memset(ans,0,sizeof(ans));

	ans[3][0] = 1;

	ans[5][1] = 1;
	ans[7][2] =1;

	for(int i=4;i<1005;i++){
		if(i-3>=0 && dp[i-3]==true){
			dp[i] = true;
			ans[i][0] = ans[i-3][0] + 1;
			ans[i][1] = ans[i-3][1];
			ans[i][2] = ans[i-3][2];
		}else if(i-5>=0 && dp[i-5]==true){
			dp[i] = true;
			ans[i][0] = ans[i-5][0];
			ans[i][1] = ans[i-5][1] + 1;
			ans[i][2] = ans[i-5][2];
		}else if(i-7>=0 && dp[i-7]==true){
			dp[i] = true;
			ans[i][0] = ans[i-7][0] + 1;
			ans[i][1] = ans[i-7][1];
			ans[i][2] = ans[i-7][2] + 1;
		}else{
			dp[i] = false;
		}
	}

	int t;
	cin>>t; while(t--){

		int n;
		cin>>n;


		if(ans[n][0]==0 && ans[n][1]==0 && ans[n][2]==0){
			cout<<"-1\n";
		}else{
			cout<<ans[n][0]<<" "<<ans[n][1]<<" "<<ans[n][2]<<"\n";
		}
	}

}
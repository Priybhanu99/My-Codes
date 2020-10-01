#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool sstt(int *a,int sum,int n){

	bool dp[2][sum+1];

	for(int i=0;i<=n;i++){
		for(int j=0;j<=sum;j++){
			if (j == 0) {
				dp[i % 2][j] = true;  
			}
			else if (i == 0) {
				dp[i % 2][j] = false;  
			}
			else if(a[i-1]>j){
				dp[i%2][j] = dp[(i+1)%2][j];
			}else{
				dp[i%2][j] = dp[(i+1)%2][j] || dp[(i+1)%2][j-a[i-1]];
			}
		}
	}

	for (int i = 0; i <=n; ++i)
	{
		for (int j=0;j<=sum;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

	
	return dp[n%2][sum];
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n,sum;
	cin>>n>>sum;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	sort(a,a+n);

	bool ans = sstt(a,sum,n);
	if(ans){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}


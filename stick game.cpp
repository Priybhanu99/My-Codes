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

	int n,k;
	cin>>n>>k;

	int a[k];
	for(int i=0;i<k;i++){
		cin>>a[i];
	}

	int dp[n+1] = {};
	for (int i = 0; i < k; ++i)
	{
		dp[a[i]] = 1;
	}

	dp[0] = 1;

	for (int i = 1; i <= n; ++i)
	{
		for(int j=0;j<k;j++){
			if(i>=a[j]){
				if(dp[i-a[j]]==0){
					dp[i] = 1;
				}
			}
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		if(dp[i]){
			cout<<"W";
		}else{
			cout<<"L";
		}
	}

	cout<<"\n";

	//}

}
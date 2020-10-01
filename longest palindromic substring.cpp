#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	string str;
	cin>>str;

	int n = str.size();
	bool dp[n][n];

	memset(dp,0,sizeof(dp));

	//substring of size 2 is always palindromic .. so mark diagonal elemnts to 1

	for(int i =0;i<n;i++){
		dp[i][i] = 1;
	}

	int maxlen = 1;

	for(int i=0;i<n-1;i++){
		if(str[i]==str[i+1]){
			dp[i][i+1] = 1;
			maxlen = 2;
		}
	}

	//now for different sizes of substring that if dp[i+1][j-1]==true and str[i]==str[j] then dp[i][j] =true
	for(int len = 3;len<=n;len++){

		for(int i = 0;i<n-len+1;i++){
			
			int j = i+len-1;
			if(dp[i+1][j-1]==1 && str[i]==str[j]){
				dp[i][j] = 1;
				if(len>maxlen){
					maxlen = len;
				}
			}

		}
	}

	cout<<maxlen;
}


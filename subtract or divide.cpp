#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

unordered_map<int,int> dp;

int solve(int n){
	if(n<=1){
		return 0;
	}

	if(dp.count(n)!=0){
		return dp[n];
	}
	int temp = 0;

	for(int i=2;i<n;i++){
		if(n%i==0){
			temp = i;
			break;
		}
	}

	if(temp==0){
		return dp[n] = min(n-1,1+solve(n-1));
	}else{
		return dp[n] =  min(1+solve(n-1),1+solve(temp));
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int n;
		cin>>n;

		if(n==1){
			cout<<"0\n";
			continue;
		}

		if(n%2==0){
			if(n==2){
				cout<<"1\n";
			}else{
				cout<<"2\n";
			}
		}else{
			int ans = 0;
			if(n-1==2){
				ans = 2;
			}else{
				ans = 3;
			}

			cout<<ans<<"\n";
		}

		
	}

}
#include <bits/stdc++.h>
using namespace std;

#define int long long int

int countera  = 0;

void swap(int a,int b){
	int temp = a;
	a=b;
	b= temp;

}

int f(int n){
	int ans = 0;

	if(n==1){
		return n;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			ans = i;
			break;
		}
	}

	if(ans == 0){
		return n;
	}

	return ans;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	cin>>t; while(t--){

		cin>>n;
		int a[n+1];
		countera++;
		int dp[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			countera++;
			dp[i] = 1;
		}

		

		countera++;


		for(int i=n/2;i>=1;i--){

			countera++;


			if(i==1){
				int y = f(n);
			}
			swap(0,1);
			int ans = 0;
			countera++;

			int x = 1;

			while(i*x<=n){
				swap(0,1);
				countera++;


				if(a[i]<a[i*x]){
					
					countera++;

					ans = max(ans,dp[i*x]);
					swap(0,1);

				}
				x++;
			}
			swap(0,1);

			dp[i] += ans;

		}

		// for (int i = 1; i <= n; ++i)
		// {
		// 	cout<<dp[i]<<",";
		// }

		int ans=1;
		for(int i=1;i<=n;i++){
			swap(0,1);
			ans=max(ans,dp[i]);
		}

		swap(0,1);

		cout<<ans<<"\n";

	}
}


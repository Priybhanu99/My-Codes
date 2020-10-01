#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e4;
bool dp[20][N];

void sum_it(int *a,int n,int sum){

	for(int i=0;i<=n;i++){
		dp[i][0] = true;
	}

	for(int i=0;i<=sum;i++){
		dp[0][i] = false;
	}

	for (int i = 1; i <= n; ++i)
	{
		for(int j=1;j<=sum;j++){
			if(a[i-1]>j){
				dp[i][j] = dp[i-1][j];
			}else{
				dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];
			}
		}
	}

	for (int i = 0; i <= n; ++i)
	{
		for(int j=0;j<=sum;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

}

list<int> printans(int *a,int row,int col){

	if(row==0&&col==0){
		list<int> base;
		return base;
	}

	if(dp[row-1][col]==1){
		a.push_front(a[col-1]);
		list<int> a = printans(a,row-1,col);		
	}

	if(dp[row-1][col-a[row-1]]==1){
		a.push_front(a[col-1]);
		list<int> a = printans(a,row-1,col-a[row-1]);		
	}


	

}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	//cin>>t; while(t--){

	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int sum;
	cin>>sum;

	sort(a,a+n);

	sum_it(a,n,sum);
	cout<<dp[n][sum]<<endl;
	// printans(a,n,sum);


	//}
}


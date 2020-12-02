#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int solve(int i,int j,int n,int m){

	if(i>=n || j>=m){

		return 0;
	}

	int sum = 0;
	int x = (a[i][j] + solve(i+1,j,n,m));
	int a1=0,a2=0;
	if(i!=n-1){
		a[i+1][j] = -1*a[i+1][j];
		a1 = -1*a[i][j] + solve(i+1,n,m);
	}
	int y = solve(i+1,j,n,m);
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

		int n,m;
		cin>>n>>m;

		int a[n][m];

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
	}

}
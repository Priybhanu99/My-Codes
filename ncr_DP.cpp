#include <bits/stdc++.h>
using namespace std;

#define int long long int

int ncr_recursion(int n,int r){
	if(r==0||r==n){
		return 1;
	}

	return ncr_recursion(n-1,r-1)+ncr_recursion(n-1,r);
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n,r;
	cin>>n>>r;

	int c[n+1][r+1];
	memset(c,sizeof(c),0);
	for (int i = 0; i <= n; ++i)
	{
		for(int j=0;j<=i;j++){
			if(j==0||j==i){
				c[i][j] = 1;
				continue;
			}

			c[i][j] = c[i-1][j-1]+c[i-1][j];
		}
	}

	cout<<c[n][r];
	cout<<ncr_recursion(n,r);
}


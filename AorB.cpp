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

	int t;
	cin>>t; while(t--){

		int n,m,a,b;
		cin>>n>>m>>a>>b;

		if(a==n&&b<n){
			cout<<"NO\n";
			continue;
		}

		int mat[n][m];
		memset(mat,0,sizeof(mat));

		for(int row=0;row<n;row++){
			for(int x=0;x<a;x++){
				mat[row][x] = 1;
			}
		}

		

	}
}


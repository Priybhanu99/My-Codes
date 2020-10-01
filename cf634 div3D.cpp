#include <bits/stdc++.h>
using namespace std;

#define int long long int
int n = 9;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t;

	while(t--){

		int arr[n+1][n+1];
		for (int i = 1; i <= n; ++i)
		{
			for(int j=1;j<=n;j++){
				cin>>arr[i][j];
			}
		}

		for(int i=0;i<3;i++){

			int x = 1;
			for(int j=0;j<3;j++){
				int a = i*3 + x;
				int b = j*3 + x;
				int num = arr[][j*3 + x];

				x++;
				int removed = arr[a][b];

			}
		}

	}
	
}


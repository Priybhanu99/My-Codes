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
	cin>>t; while(t--){

		int n,m;
		cin>>n>>m;

		char a[n][m];
		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}

		int ans = 0;

		for(int h = 1;h<=n;h++){

			int row = 0;
			while(row<n-h){
				for(int i=0;i<m;i++){
				//starting point -> {row,i}
					bool flag = true;

					int r = row;
					int temp = 1;

					while(r<row+h){

						if(r>=n){
							flag = false;
							break;
						}
						temp = 2*r-1;

						int sp = i - temp/2;
						if(sp<0){
							flag = false;
							break;
						}

						if(i+temp/2>=m){
							flag = false;
							break;
						}

						for(int y=sp;y<sp+temp;y++){
							if(a[r][y]!='*'){
								flag = false;
								break;
							}
						}

						ans++;

						r++;
					}

					// if(flag){
					// 	ans++;
					// }
				} row++;
			}

		}


		cout<<ans<<"\n";

	}

}
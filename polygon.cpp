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

	int t,n;
	cin>>t; while(t--){

		cin>>n;
		char a[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}

		bool flag = true;

		int row,col;
		for(row = n-1;row>=0;row--){
			for(col = n-1;col>=0;col--){

				if(a[row][col]=='1'){
					if(row==n-1 || col==n-1){
						continue;
					}else{
						if(a[row+1][col]=='1' || a[row][col+1]=='1'){
							
						}else{
							flag = false;
							break;
						}
					}
				}
			}
		}

		//cout<<row<<" "<<col<<"\n";
		if(flag == true){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

	}
}


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

		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}

		
		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<m;j++){
				if((i<n-1 && a[i][j]==a[i+1][j])|| (j<m-1 && a[i][j] == a[i][j+1])){
					if((i>0 && a[i-1][j]==a[i][j]+1) || (j>0 && a[i][j-1]==a[i][j]+1)){
						//skip
					}else{
						a[i][j]++;
					}
				}
			}
		}

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}

	}

}
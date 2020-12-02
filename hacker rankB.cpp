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
	//  #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	//  #endif

	int t,tc = 0;
	cin>>t; while(t--){

		tc++;
		int n;

		cin>>n;

		int a[n][n];
		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}


		for(int i=1;i<n;i++){
			for(int j=1;j<n;j++){
				if(i-1>=0 && j-1>=0){
					a[i][j] += a[i-1][j-1];
				}
			}
		}

		int mxm = 0;

		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<n;j++){
				mxm = max(mxm,a[i][j]);
			}
		}


		cout<<"Case #"<<tc<<": "<<mxm<<"\n";
	}

}
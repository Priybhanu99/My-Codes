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
		int a[n][n];
		
		int curr = 1;
		for(int i = 0;i<n;i++){
			if(i%2==0){
				for(int j=0;j<n;j++){

					a[i][j] = curr++;
				}
			}else{
				for(int x=n-1;x>=0;x--){
					a[i][x] = curr++;
				}
			}
		}

		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<n;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}

	}
}


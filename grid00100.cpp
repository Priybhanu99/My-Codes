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

		int n,k;
		cin>>n>>k;

		int a[n][n];
		memset(a,0,sizeof(a));


		while(1){

			//main diagonal
			for(int i=0;i<n;i++){
				a[i][i]==1;
				k--;
				if(k<0){
					break;
				}
			}
			

			for(int i=0;i<n;i++){
				if(i==n/2){
					continue;
				}
				a[i][n-i-1] =1;
				k--;

				if(k<0){
					break;
				}
			}



		}



	}
}


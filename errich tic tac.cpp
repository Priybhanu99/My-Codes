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

		int n;
		cin>>n;

		char a[n][n];

		int k = 0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				if(a[i][j]=='X'){
					k++;
				}
			}
		}

		int count = 0;

		for (int i = 0; i < n; ++i)
		{
			// for(int j=0;j<n;j++){
				if(count<k/3){
					if(a[i][i]=='X'){
						a[i][i] = 'O';
						count++;
					}
				// }
			}
		}


		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<n;j++){
				cout<<a[i][j];
			}
			cout<<"\n";
		}

		// cout<<"\n";




	}

}
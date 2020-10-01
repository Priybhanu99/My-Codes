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

		int n,m;
		cin>>n>>m;

		int row[n];
		int col[m];

		memset(row,0,sizeof(row));
		memset(col,0,sizeof(col));

		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				if(a[i][j]==1){
					row[i] = 1;
					col[j] = 1;
				}
			}
		}

		int turn = 1; //1->Ashish
		bool ok = true;

		// cout<<"\nrow: ";
		// 	for (int i = 0; i < n; ++i)
		// 	{
		// 		cout<<row[i]<<" ";
		// 	}
		// 	cout<<"\ncol: ";
		// 	for (int i = 0; i < m; ++i)
		// 	{
		// 		cout<<col[i]<<" ";
		// 	}

		while(1){

			int indexr = -10;

			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(row[i]==0 && col[j]==0){
						row[i] = 1;
						col[j] = 1;
						indexr = 1;
					}
				}
			}

			

			if(indexr == -10){
				break;
			}

			cout<<turn<<",";
			cout<<"\nrow: ";
			for (int i = 0; i < n; ++i)
			{
				cout<<row[i]<<" ";
			}
			cout<<"\ncol: ";
			for (int i = 0; i < m; ++i)
			{
				cout<<col[i]<<" ";
			}

			if(turn==0){
				turn = 1;
			}else{
				turn = 0;
			}

		}
		cout<<"\n";
		if(turn==0){
			cout<<"Ashish\n";
		}else{
			cout<<"Vivek\n";
		}







	}
}


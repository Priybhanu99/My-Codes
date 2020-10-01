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

	int n,m;
	cin>>n>>m;

	char a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}

	int count = 0;
	vector<int> 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]=='*'){
				int row = i;
				int col = j;

				while(a[row][j]!='.'){
					row++;
					a[row][col] = '.';
				}

				while(a[i][col]!='.'){
					col++;
					a[i][col] = '.';
				}






			}
		}
	}

}


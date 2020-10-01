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

		char grid[8][8];
		memset(grid,'X',sizeof(grid));

		int row = 0;
		int col = 1;

		n--;
		grid[0][0] = 'O';
		while(n){

			if(col==8){
				row ++;
				col = 0;
			}
			if(row>=8){
				break;
			}

			grid[row][col] = '.';
			col++;
			n--;
		}

		for(int i=0;i<8;i++){

			for(int j=0;j<8;j++){
				cout<<grid[i][j];
			}
			cout<<"\n";
		}
		cout<<"\n";
	}

}
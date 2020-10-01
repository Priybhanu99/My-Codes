#include <bits/stdc++.h>
using namespace std;

#define int long long int

pair<int,int> dir[] = {{1,0},{0,1},{0,-1},{-1,0}};

bool ingrid(int row,int col,int i,int j){

	if(i<0 || j<0){
		return false;
	}

	if(i>=row || j>=col){
		return false;
	}

	return true;
}
void dfs(char a[10][10],int row,int col){

	a[row][col] = 'O';
	for(auto i:dir){
		int new_row = row+i.first;
		int new_col = col+i.second;

		if(ingrid(new_row,new_col,row,col) && a[new_row][new_col]=='X'){
			dfs(a,new_row,new_col);
		}
	}
}

int solve(char a[10][10],int row,int col){

	int ans = 0;
	for (int i = 0; i < row; ++i)
	{
		for(int j=0;j<col;j++){
			if(a[i][j]=='X'){

				ans++;
				dfs(a,i,j);
			}
		}
	}

	return ans;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	//cin>>t; while(t--){

	int n,m;
	cin>>n>>m;
	char a[n][m];
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}

	int ans = solve(a,n,m);
	cout<<ans; 

	//}
}


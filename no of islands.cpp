#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool ingrid(int row,int col,int i,int j){

	if(i<0 || j<0){
		return false;
	}

	if(i>=row || j>=col){
		return false;
	}

	return true;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	
	int row,col;
	cin>>row>>col;

	int grid[row][col];
	for (int i = 0; i < row; ++i)
	{
		for(int j=0;j<col;j++){
			cin>>grid[i][j];
		}
	}

	//using BFS

	queue<pair<int,int> > q;
	int ans = 0;

	vector<pair<int,int> > dir{{0,1},{1,0},{-1,0},{0,-1}};


	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(grid[i][j]==1){
				
				ans++;
				q.push({i,j});
				grid[i][j] = 0;

				while(!q.empty()){
					pair<int,int> p = q.front();
					q.pop();

					for(auto x:dir){
						int new_row = p.first + x.first;
						int new_col = p.second + x.second;

						if(grid[new_row][new_col]==1 && ingrid(row,col,new_row,new_col)==true){
							grid[new_row][new_col] = 0;
							q.push({new_row,new_col});
						}
					}
					
				}

			}
		}

	}	
	cout<<ans;




}


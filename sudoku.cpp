#include <bits/stdc++.h>
using namespace std;

int grid[9][9];

void print(){

	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cout<<grid[i][j]<<" ";
		}
		cout<<endl;
	}
}

bool issafe(int row,int col,int item){

	//for row
	for(int i=0;i<col;i++){
		if(grid[row][i]==item){
			return false;
		}
	}

	//for col
	for(int i=0;i<row;i++){
		if(grid[i][col]==item){
			return false;
		}
	}

	//for small box
	//find the box starting

	int r = (row/3)*3;
	int c = (col/3)*3;

	for(int i=r;i<r+3;i++){
		for(int j = c;j<c+3;j++){
			if(grid[i][j]==item){
				return false;
			}
		}
	}

	//else
	return true;


}

void solve(int row,int col){

	if(row==9){
		print();
		exit(0);
	}
	if(col==9){
		solve(row+1,0);
	}

	if(grid[row][col]==0){
		for(int i = 1;i<=9;i++){
			if(issafe(row,col,i)){
				grid[row][col] = i;
				solve(row,col+1);
				grid[row][col] = 0;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin>>grid[i][j];
		}
	}

	solve(0,0);

}


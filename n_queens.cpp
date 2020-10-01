#include <bits/stdc++.h>
using namespace std;

const int N=100;
int a[N][N],n;

void printans(){
	for(int i=0;i<n;i++){
		for (int j = 0; j < n; ++j)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

bool isitsafe(int row,int col){

	//for row
	for(int i=0;i<row;i++){
		if(a[i][col]==1){
			return false;
		}
	}

	//for left diagonal
	int r = row;
	int c = col;
	while(c>=0&&r>=0){
		if(a[r][c]==1){
			return false;
		}
		r--;
		c--;
	}

	//for right diagonal
	r =  row;
	c = col;
	while(c<n&&r>=0){
		if(a[r][c]==1){
			return false;
		}
		r--;
		c++;
	}

	return true;

}
void solve(int row,int col){

	if(row==n){
		printans();
		return;
	}

	if(col==n){
		row = row+1;
		solve(row,0);
	}

	for (int i = 0; i < n; ++i)
	{
		if(isitsafe(row,i)){
			a[row][i] = 1;
			solve(row+1,col);
			a[row][i] = 0;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	    #endif
	//cin>>t; while(t--){

	//size of board
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			a[i][j] = 0;
		}
	}

	solve(0,0);
	

	//}
}


#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int N = 1e3;
int grid[N][N];
int ans[N][N];
int counts;


bool isitpossible(int n,int m,int row,int col){
	if(row==n||col==m){
		return false;
	}
	if(grid[row][col]==100){
		return false;
	}

	return true;
}


void printthis(int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}


void find_rightmost(int n,int m,int row,int col){

	if(row==n||col==m){
		cout<<"-1";
		exit(0);
	}

	if(row==n-1&&col==m-1){
		counts++;
		ans[row][col] = 1;
		printthis(n,m);
		exit(0);
	}

	//cout<<row<<" "<<col<<endl;

	ans[row][col] = 1;
	if(isitpossible(n,m,row,col)){
		if(isitpossible(n,m,row,col+1)){
			ans[row][col+1] = 1;
			find_rightmost(n,m,row,col+1);
		}
		if(isitpossible(n,m,row+1,col)){
			ans[row+1][col] = 1;
			find_rightmost(n,m,row+1,col);
		}

		ans[row][col] = 0;
	}

}


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n,m;
	cin>>n>>m;

	counts = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			char num;
			cin>>num;
			if(num=='X'){
				grid[i][j] = 100;
			}else{
				grid[i][j] = 0;
			}
		}
	}

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<grid[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // printthis();

	find_rightmost(n,m,0,0);
	if(counts==0){
		cout<<"-1";
	}

	//printthis(n,m);




}


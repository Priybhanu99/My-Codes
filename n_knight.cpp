#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int N = 1e3;

int board[N][N],count1=0;

void  printboard(int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			// if(board[i][j]==1){
			// 	cout<<"{"<<i<<"-"<<j<<"} ";
			// }
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	//cout<<" ";
	cout<<endl;
}

bool ispossible(int n,int row,int col){

	//ul
	if(row-2>=0&&col-1>=0){
		if(board[row-2][col-1]==1){
			return false;
		}
	}

	if(row-2>=0&&col+1<n){
		if(board[row-2][col+1]==1){
			return false;
		}
	}

	if(row+2<n&&col-1>=0){
		if(board[row+2][col-1]==1){
			return false;
		}
	}

	if(row+2<n&&col+1<n){
		if(board[row+2][col+1]==1){
			return false;
		}
	}

	if(row-1>=0&&col-2>=0){
		if(board[row-1][col-2]==1){
			return false;
		}
	}

	if(row-1>=0&&col+2<n){
		if(board[row-1][col+2]==1){
			return false;
		}
	}

	if(row+1<n&&col-2>=0){
		if(board[row+1][col-2]==1){
			return false;
		}
	}

	if(row+1<n&&col+2<n){
		if(board[row+1][col+2]==1){
			return false;
		}
	}

	return true;
}

void solve(int n,int row,int col){

	cout<<row<<" "<<col<<endl;
	if(count1==n){
		//print ans and return
		//printboard(n);
		//board[row][col-1] = 0;
		return;
	}


	if(col>=n){
		//cout<<"hi";
		solve(n,row+1,0);
	}

	if(row>=n){
		return;
	}

	for(int i=col;i<n;i++){
		if(ispossible(n,row,i)){
			board[row][i] = 1;
			count1++;
			solve(n,row,i+1);
			board[row][i] = 0;
			count1 -= 1;
		}
	}

}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n;
	cin>>n;

	solve(n,0,0);
}


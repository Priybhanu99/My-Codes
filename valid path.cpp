#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 10;
vector<int> a(10),b(10);
int radius;
int n;

int mat[N][N];

bool dfs(int i,int j,int x,int y){
	if(i==x && j==y){
		return true;
	}

	if(i<0 || j<0 || i>x || j>y){
		return false;
	}

	if(mat[i][j] == 1){
		return false;
	}

	bool ans = dfs(i+1,j,x,y) || dfs(i,j+1,x,y) || dfs(i-1,j,x,y) || dfs(i-1,j-1,x,y);

	return ans;
}

bool isinside(int i,int j){

	for(int x = 0 ;x<n;i++){
		int dis = ((a[x]-i-1)*(a[x]-i-1)) + ((b[x]-j-1)*(b[x]-j-1));

		if(dis<=radius*radius){
			return true;
		}
	}
	return false;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int x,y;
	cin>>x>>y;


	cin>>n>>radius;

	// vector<int> a,b;
	
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}

	// int mat[x][y];

	memset(mat,0,sizeof(mat));

	for (int i = 0; i < x; ++i)
	{
		for(int j=0;j<y;j++){
			if(isinside(i,j)){
				mat[i][j] = 1;
			}
		}
	}

	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}

	// bool ans = dfs(0,0,x-1,y-1);
	// cout<<ans;
}


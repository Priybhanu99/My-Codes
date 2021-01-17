#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

const int N = 1005;
char a[N][N];


void dfs(int i,int j,int n,int m){
	if(i<0||j<0||i>=n||j>=m){
		return;
	}

	if(a[i][j]=='#'){
		return;
	}


	a[i][j] = '#';
	dfs(i+1,j,n,m);
	dfs(i,j+1,n,m);
	dfs(i-1,j,n,m);
	dfs(i,j-1,n,m);
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

	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}

	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]=='.'){
				// cout<<i<<" "<<j<<"\n";
				count++;
				dfs(i,j,n,m);
			}
		}
	}

	cout<<count;



}
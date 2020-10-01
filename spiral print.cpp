#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

const int R= 4;
const int C = 4;


void spiral(int m, int n, int arr[R][C]){
	//write your code here
	int l = 0,r=n-1,u=0,d=m-1;
	while(l<=r){
		for(int i=l;i<=r;i++){
			cout<<arr[u][i]<<" ";
		}

		for(int i=u+1;i<=d;i++){
			cout<<arr[i][r]<<" ";
		}

		for(int i=r-1;i>=l;i--){
			cout<<arr[d][i]<<" ";
		}

		for(int i=d-1;i>u;i--){
			cout<<arr[i][l]<<" ";
		}

		l++;
		r--;
		u++;
		d--;

	}
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

	int a[R][C];

	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}

	spiral(n,m,a);
	//}

}
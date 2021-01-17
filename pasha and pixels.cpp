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
	//cin>>t; while(t--){

	int n,m,k;
	cin>>n>>m>>k;

	int a[n+2][m+2];
	memset(a,0,sizeof(a));

	int ans = 0;

	for (int i = 0; i < k; ++i)
	{
		int x,y;
		cin>>x>>y;

		a[x][y] = 1;
		if(ans!=0){
			continue;
		}
		
		if(a[x+1][y]&&a[x][y+1]&&a[x+1][y+1]){
			ans = i+1;
		}else if(a[x][y+1]&&a[x-1][y]&&a[x-1][y+1]){
			ans = i+1;
		}else if(a[x-1][y]&&a[x-1][y-1]&&a[x][y-1]){
			ans = i+1;
		}else if(a[x][y-1]&&a[x+1][y-1]&&a[x+1][y]){
			ans = i+1;
		}
	}

	cout<<ans;
	//}

}
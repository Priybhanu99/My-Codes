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

	int a[5][5];
	P index;

	for (int i = 0; i < 5; ++i)
	{
		for(int j=0;j<5;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				index.F = i;
				index.S = j;
			}
		}
	}

	int ans = abs(index.F-2) + abs(index.S-2);
	cout<<ans<<"\n";
}
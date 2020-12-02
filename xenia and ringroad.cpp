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

	int n,m;
	cin>>n>>m;

	int a[m];
	for(int i=0;i<m;i++){
		cin>>a[i];
	}

	int ans = 0;
	int last = 1;

	for (int i = 0; i < m; ++i)
	{
		if(a[i]>=last){
			ans += a[i]-last;
		}else{
			ans += n-last + a[i];
		}
		last = a[i];
	}

	cout<<ans;


	//}

}
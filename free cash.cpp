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

	map<int,int> map;
	cin>>t; while(t--){

		int h,m;
		cin>>h>>m;

		map[(h*60) + m]++;

	}

	int ans = 1;
	for(auto i:map){
		ans = max(ans,i.S);
	}

	cout<<ans<<"\n";
}
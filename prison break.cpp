#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int dist(int x,int y,int r,int c){
	int ans = abs(x-r) + abs(y-c);
	return ans;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int n,m,r,c;
		cin>>n>>m>>r>>c;

		int ans = INT_MIN;

		ans = max(ans,dist(1,1,r,c));
		ans = max(ans,dist(1,m,r,c));

		ans = max(ans,dist(n,1,r,c));
		ans = max(ans,dist(n,m,r,c));

		cout<<ans<<"\n";
	}

}
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int solve(vector< pair<pair<int,int>,  int> >a ,int i,int n,int sp){

	if(i==n){
		return 0;
	}

	int x = 0;
	int y = 0;

	if(a[i].F.F>=sp){	
		return max(a[i].S + solve(a,i+1,n,a[i].F.S), solve(a,i+1,n,sp));
	}else{
		return solve(a,i+1,n,sp);
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

	int n;
	cin>>n;

	vector<pair<pair<int,int>,int>> a;
	for(int i=0;i<n;i++){
		cin>>a[i].F.F;
		cin>>a[i].F.S;
		cin>>a[i].S;
	}

	// sort(a.begin(), a.end());

	int ans = solve(a,0,n,0);
	cout<<ans;



	//}

}
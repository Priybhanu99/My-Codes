#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

vector<vector<int>> func(int *a,int i,int n){

	if(i==n){
		vector<vector<int> > base;
		vector<int> temp(0);
		base.push_back(temp);
		return base;
	}

	vector<vector<int>> temp = func(a,i+1,n);

	vector<vector<int>> rv;
	for(auto x:temp){

		vector<int> temp1 = x;
		rv.pb(temp1);
		temp1.pb(a[i]);

		rv.pb(temp1);
	}

	return rv;
}


int solve(int *a, int i,int n, int x, int y){
	if(i==n){
		return abs(x-y);
	}

	int ans1 = solve(a,i+1,n,x+a[i],y);
	int ans2 = solve(a,i+1,n,x,y+a[i]);

	return min(ans1,ans2);
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

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<solve(a,0,n,0,0);

}
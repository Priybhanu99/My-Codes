#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

unordered_map<int,vector<vector<int>>> dp;

vector<vector<int>> solve(int *a,int i,int n){

	if(i==n){
		vector<vector<int>> base;
		vector<int> x(0);
		base.pb(x);
		return base;
	}

	if(dp.count(i)!=0){
		return dp[i];
	}

	vector<vector<int>> temp = solve(a,i+1,n);
	vector<vector<int>> ans;
	for(auto x:temp){
		ans.pb(x);
		x.pb(a[i]);
		ans.pb(x);
	}


	return dp[i] = ans;
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

	sort(a,a+n);

	set<int> s;

	vector<vector<int>> ans = solve(a,0,n);
	for(auto i:ans){
		int temp = 0;
		for(auto j:i){
			temp += j;
		}
		s.insert(temp);
	}
	s.erase(s.begin());
	cout<<s.size()<<"\n";
	for(auto i:s){
		cout<<i<<" ";
	}
	//}

}
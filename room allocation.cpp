#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

bool cmp(P a,P b){
	if(a.S!=b.S){
		return a.S<b.S;
	}

	return a.F<b.F;
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

	vector<vector<int>> a(n,vector<int>(3));

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i][1]>>a[i][0];
		a[i][2] = i;
	}
	sort(a.begin(), a.end());

	int count = 1;
	set<P> s;

	vector<int> ans(n,0);
	for (int i = 0; i < n; ++i)
	{
		auto it = s.lower_bound({a[i][1],0LL});
		if(it!=s.begin()){
			--it;
			ans[a[i][2]] = (*it).S;
			s.erase(it);
		}else{
			ans[a[i][2]] = s.size();
		}

		s.insert({a[i][0],ans[a[i][2]]});
	}

	cout<<s.size()<<"\n";
	for (int i = 0; i < n; ++i)
	{
		cout<<ans[i]+1<<" ";
	}
}
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second


bool cmp1(P a,P b){
	return a.F<b.F;
}

bool cmp2(P a,P b){
	return a.S<b.S;
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

	int n,m,k;
	cin>>n>>m>>k;

	// int a[n][m];

	vector<P> a;

	for (int i = 0; i < k; ++i)
	{
		int x,y;
		cin>>x>>y;

		a.pb(make_pair(x,y));
	}

	P min_row = {0,0};
	P min_col = {0,0};

	sort(a.begin(), a.end(),cmp1);
	min_row = a[0];

	sort(a.begin(), a.end(),cmp2);
	min_col = a[0];

	// cout<<min_row.F<<" "<<min_row.S<<"\n";
	// cout<<min_col.F<<" "<<min_col.S<<"\n";


	int ans = 0;

	if((min_row.F<=min_col.F && min_row.S<=min_col.S) || (min_col.F<=min_row.F && min_col.S <= min_row.S)){
		ans = ( n -(min(min_row.F,min_col.F)) + 1 ) * ( n - (min(min_row.S,min_col.S))+1);
	}else{
		int cmmn = ((n-min_row.F)*(n-min_col.S));
		ans = ((n-min_row.F+1)*(n-min_row.S+1)) + ((n-min_col.F+1)*(n-min_col.S+1));
		ans -= cmmn;
	}

	cout<<ans<<"\n";
	//}

}
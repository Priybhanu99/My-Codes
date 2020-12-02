#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int32_t main(){ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n,m;
	cin>>n>>m;

	int mnm = n/m;
	int mxm = (n-(m-1));


	int temp = n%m;
	int ans1 = (m-temp)*((mnm*(mnm-1))/2);
	ans1 += temp*((mnm*(mnm+1))/2);
	int ans2 = (mxm*(mxm-1))/2;

	cout<<ans1<<" "<<ans2<<"\n";
}
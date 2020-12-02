#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

vector<int> factors(int n){
	vector<int> a;
	for(int i=1;i*i<=n;i++){

		if(n%i==0){
			a.pb(i);
			a.pb(n/i);
		}
	}

	sort(a.begin(), a.end());
	return a;
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

	int a[n][2];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i][0]>>a[i][1];
	}


	int b;
	cin>>b;


	vector<int> factors = factors(b); // 2 3 5 6 ....
	map<P,int> m;
	int ans = 0;


	(a[i]+temp)*(a[i][1] + x) = b


	for (int i = 0; i < n; ++i)
	{
		for(auto x:b){
			int req = a[i]-x;
			if(req<=0){
				continue;
			}
			// int temp = 
			// if(m[make_pair(req,)])
		}
	}


	//}

}
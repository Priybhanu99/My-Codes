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

	int n;
	cin>>n;

	map<string,int> m;
	for(int i=0;i<n;i++){

		string s;
		cin>>s;

		m[s]++;
	}

	int ans = 0;
	for(auto i:m){
		ans = max(ans,i.second);
	}

	cout<<ans<<"\n";
}
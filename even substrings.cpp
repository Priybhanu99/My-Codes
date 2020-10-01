#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	//cin>>t; while(t--){

	cin>>n;
	string s;

	cin>>s;

	int ans = 0;

	for (int i = 0; i < n; ++i)
	{
		if((s[i]-'0')%2==0){
			ans += i+1;
		}
	}

	cout<<ans;

	//}
}


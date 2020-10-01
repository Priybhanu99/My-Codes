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

	int t;
	//cin>>t; while(t--){

	string a,b;
	cin>>a>>b;

	string ans = "";
	for (int i = 0; i < a.size(); ++i)
	{
		ans += ((a[i]-'0') ^ (b[i]-'0')) + '0';
	}

	cout<<ans;
	//}

}
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

	int n;
	string s,ans;

	cin>>n>>s;

	for (int i = 0; i < n; ++i)
	{
		if(ans.size()%2==0 || ans[ans.size()-1]!= s[i]){
			ans.push_back(s[i]);
		}
	}

	if(ans.size()%2==1){
		ans.pop_back();
	}

	cout<<n-ans.size()<<"\n";

	cout<<ans;
}


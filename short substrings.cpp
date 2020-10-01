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
	cin>>t; while(t--){

		string s;
		cin>>s;

		if(s.size()==1){
			cout<<s<<"\n";
			continue;
		}

		string ans;
		ans += s[0];
		for(int i=1;i<s.size()-1;i+=2){
			ans+= s[i];
		}
		ans += s[s.size()-1];

		cout<<ans<<"\n";
	}
}


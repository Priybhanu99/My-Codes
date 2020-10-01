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

	int t;
	cin>>t; while(t--){

		string s;
		cin>>s;

		int ans = 0;

		for (int i = 0; i < s.size()-1; ++i)
		{
			if(s[i]=='x' && s[i+1]=='y'){
				ans++;
				i++;
			}else if(s[i]=='y' && s[i+1]=='x'){
				ans++;
				i++;
			}
		}


		cout<<ans<<"\n";

	}
}


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
	cin>>t; while(t--){

		string s;
		cin>>s;

		int one=0,two=0;

		int ans = 0;

		for (int i = 0; i < s.size(); ++i)
		{
			if(s[i]=='('){
				one++;
			}else if(s[i]=='['){
				two++;
			}else if(s[i]==')'){
				if(one>0){
					one--;
					ans++;
				}
			}else if(s[i]==']'){
				if(two>0){
					two--;
					ans++;
				}
			}
		}

		cout<<ans<<"\n";

	}

}
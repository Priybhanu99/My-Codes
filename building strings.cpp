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

		int n,mn;
		cin>>n>>mn;

		string s,c,p;
		cin>>s>>c>>p;

		map<char,int> m;
		for(int i=0;i<n;i++){
			if(m.count(s[i])==0){
				m[s[i]] = c[i]-'0';
			}else{
				m[s[i]] = min(m[s[i]],(c[i]-'0'+0LL));
			}
		}

		bool flag = true;
		int ans = 0;
		for (int i = 0; i < mn; ++i)
		{
			if(m.count(p[i])==0){
				flag = false;
				break;
			}
			ans += m[p[i]];
		}

		if(flag==false){
			cout<<"-1\n";
		}else{
			cout<<ans<<"\n";
		}


	}

}
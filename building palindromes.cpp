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
	int tc = 0;
	cin>>t; while(t--){

		tc++;

		int n,q;
		cin>>n>>q;
		
		vector<char> s(n+1);
		for (int i = 1; i <= n; ++i)
		{
			cin>>s[i];
		}

		int ans = 0;
		while(q--){

			int l,r;
			cin>>l>>r;

			map<char,int> map;

			for(int i=l;i<=r;i++){
				map[s[i]]++;
			}

			int count = 0;
			for(auto i:map){
				if(i.second<=1){
					count++;
				}
			}

			if(count<=1){
				ans++;
			}
		}

		cout<<"Case #"<<tc<<": "<<ans<<"\n";


	}
}


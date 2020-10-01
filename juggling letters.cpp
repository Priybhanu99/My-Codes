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

		int n;
		cin>>n;

		map<char,int> m;
		for (int i = 0; i < n; ++i)
		{
			string s;
			cin>>s;

			for(auto x:s){
				m[x]++;
			}
		}

		bool flag = true;
		for(auto i:m){
			if(i.second%n!=0){
				flag = false;
			}
		}


		if(flag){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}

}
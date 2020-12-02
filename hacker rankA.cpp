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
	//  #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	//  #endif

	int t,tc = 0;
	cin>>t; while(t--){

		tc++;

		string s;
		cin>>s;

		int n = s.size();

		vector<int> kick,start;

		for (int i = 0; i < s.size(); ++i)
		{
			if(i!=n-3){
				string temp = s.substr(i,4);
				if(temp=="KICK"){
					kick.pb(i);
				}
			}
			if(i!=n-4){
				string temp = s.substr(i,5);
				if(temp=="START"){
					start.pb(i);
				}
			}
		}

		// for(auto i:start){
		// 	cout<<i<<" ";
		// }

		int ans = 0;
		for(auto i:kick){
			for(int x = 0;x<start.size();x++){
				if(i<start[x]){
					ans++;
				}
			}
		}


		cout<<"Case #"<<tc<<": "<<ans<<"\n";
	}

}
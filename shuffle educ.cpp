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

		int n,x,m;
		cin>>n>>x>>m;
		
		map<pair<int,int>,int> seq;
		for (int i = 0; i < m; ++i)
		{
			int l,r;

			cin>>l>>r;
			if(l<=x && x<=r){
				seq[make_pair(l,r)]++;
			}else{
				for(auto s:seq){
					pair<int,int> p = s.first;
					if(l>=p.first || p.second<=r){
						seq[make_pair(l,r)]++;
					}
				}
			}

		}

		int ans = 0;
		int last = 0;
		for(auto i:seq){
			pair<int,int> p = i.first;

			//cout<<p.first<<","<<p.second<<"\n";
			// ans += ((p.first)-last <=0) ? 0:(p.first)-last ;
			// last = p.second;
			if(last<p.second){
				ans += (p.second-last);
				last = p.second;
			}
		}

		cout<<ans<<"\n";
		// cout<<"\n";
	}
}

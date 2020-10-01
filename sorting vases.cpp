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

		int n,m;
		cin>>n>>m;
		
		vector<pair<int,int> > a(n+1);	
		for(int i=1;i<=n;i++){
			cin>>a[i].first;
			a[i].second = i;
		}

		for (int i = 0; i < m; ++i)
		{
			int x,y;
			cin>>x>>y;			
		}


		int ans = 0;

		sort(a.begin(), a.end());

		for (int i = 1; i <= n; ++i)
		{
			if(a[i].second==i){
				continue;
			}
			int x = 0;
			int y = 0;
			swap(x,y);
			
			swap(a[i].first,a[a[i].second].first);
			swap(a[i].second,a[a[i].second].second);

			if(i!=a[i].second){
				i--;
			}

			ans++;
		}

		cout<<ans<<"\n";

	}
}


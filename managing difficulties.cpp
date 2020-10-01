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

		int a[n];
		map<int,vector<int>> m;

		for(int i=0;i<n;i++){
			cin>>a[i];
			m[a[i]].push_back(i);
		}

		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			for(int j=i+1;j<n;j++){
				int x = a[i];
				int y = a[j];
				//y-x == z-y
				//z = 2y-x
				int z = 2*y - x;
				if(m.count(z)!=0){
					auto itr = upper_bound(m[z].begin(), m[z].end(),j+1);					
					if(itr!=m[z].end()){
						ans++;
					}
				}
			}
		}

		cout<<ans<<"\n";

	}

}
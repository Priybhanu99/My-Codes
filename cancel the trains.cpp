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

		int n,m;
		cin>>n>>m;

		map<int,int> map;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;

			map[num]++;
		}

		int ans = 0;

		for (int i = 0; i < m; ++i)
		{
			int num;
			cin>>num;

			if(map.count(num)!=0){
				ans++;
			}
		}

		cout<<ans<<"\n";
	}

}
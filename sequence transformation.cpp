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

		map<int,int> map;
		vector<int> a(n);
		for (int i = 0; i < n; ++i){
			int num;
			cin>>num;

			a[i] = num;

			// map[num].pb(i);
		}

		int size = unique(a.begin(), a.end()) - a.begin();
		for (int i = 0; i < size; ++i)
		{
			map[a[i]]++;
		}

		int ans = INT_MAX;




		for(auto i:map){
			int temp = i.S;
			if(i.F==a[0]&&i.F==a[n-1]){
				temp--;
			}else{
				if(i.F!=a[0] && i.F!=a[n-1]){
					temp++;
				}
			}

			ans = min(ans,temp);
		}

		cout<<ans<<"\n";

	}

}
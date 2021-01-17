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
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		map<int,set<int>> map;


		for (int i = 0; i < n; ++i)
		{
			map[a[i]].insert(i+1);
		}


		vector<P> ans;
		for(auto i = map.begin();i!=map.end();i++){
			set<int> s = (*i).S;
			set<int> s1 = (*(i+1)).S;




		}



	}

}
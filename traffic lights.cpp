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

	int x,n;
	cin>>x>>n;

	set<int> s;

	s.insert(0);
	s.insert(x);

	map<int,int> mp;
	mp[x]++;

	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;


		auto it = s.lower_bound(a);

		int r = *it;
		--it;
		int l = *it;

		mp[r-l]--;
		if(!mp[r-l]){
			mp.erase(r-l);
		}

		mp[r-a]++;
		mp[a-l]++;

		s.insert(a);

		cout<<((--mp.end())->first)<<" ";

	}

	

}
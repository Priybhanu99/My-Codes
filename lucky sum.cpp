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

	
	int l,r;
	cin>>l>>r;

	vector<int> a;

	set<int> s;

	s.insert(4);
	s.insert(7);

	// a.pb(4);
	// a.pb(7);

	for (int i = 0; i < 100; ++i)
	{
		int num = *(s.begin());
		s.erase(num);

		a.pb(num);

		s.insert(num*10 + 4);
		s.insert(num*10 + 7);

		
	}


	for(auto i:a){
		cout<<i<<"\n";
	}
	int index_one = lower_bound(a.begin(), a.end(),l) - a.begin();
	int index_two = lower_bound(a.begin(), a.end(),r) - a.begin();

	cout<<index_one<<" "<<index_two<<"\n";
	int ans = 0;
	for(int i=index_one;i<=index_two;i++){
		ans += a[i];
	}	

	cout<<ans;

}
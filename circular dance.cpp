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

	int t,n;
	//cin>>t; while(t--){

	cin>>n;
	map<int,vector<int> > map;

	pair<int,int> pairs;

	for (int i = 0; i < n; ++i)
	{
		int a,b;
		cin>>a>>b;
		map[a].push_back(b);
		map[b].push_back(a);
		if(i==0){
			pairs.first = a;
			pairs.second = b;
		}
	}

	set<int> ans;
	int x = pairs.second;
	vector<int> a;
	a.push_back(x);
	ans.insert(x);
	while(ans.size()!=n){
		for(auto i:map[x]){

			if(x==pairs.second && i==pairs.first){
				continue;
			}

			if(ans.count(i)==0){
				ans.insert(i);
				a.push_back(i);
				x = i;
				break;
			}
		}
	}

	reverse(a.begin(), a.end());
	for(auto i:a){
		cout<<i<<" ";
	}

	//}
}


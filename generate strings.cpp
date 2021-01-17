#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

vector<string> func(string s,int n){
	if(s.size()==1){
		vector<string> temp;

		temp.pb(s);
		return temp;
	}

	vector<string> temp = func(s.substr(1),n);
	vector<string> rv;

	char ch = s[0];

	int len = temp[0].size();
	for(int i=0;i<=len;i++){

		// string str = 
		for(auto x:temp){
			string str = x.substr(0,i) + ch + x.substr(i);
			rv.pb(str);
		}
	}
	return rv;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	string s;
	cin>>s;

	vector<string> ans = func(s,s.size());
	sort(ans.begin(), ans.end());

	map<string,int> m;
	for(auto i:ans){
		m[i]++;
	}
	// unique(ans.begin(), ans.end());

	// cout<<ans.size()<<"\n";

	cout<<m.size()<<"\n";

	for(auto i:m){
		cout<<i.F<<"\n";
	}
	//}

}
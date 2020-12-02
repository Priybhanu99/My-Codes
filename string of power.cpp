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

	string s;
	cin>>s;

	vector<int> a,b;


	if(s.size()<=4){
		cout<<"0\n";
		return 0;
	}

	for(int i=0;i<s.size()-4;i++){
		string temp = s.substr(i,5);
		if(temp=="heavy"){
			a.pb(i);
		}else if(temp=="metal"){
			b.pb(i);
		}
	}


	if(a.size()==0 || b.size()==0){
		cout<<"0\n";
		return 0;
	}


	int ans = 0;
	for(int i=0;i<a.size();i++){
		int index = upper_bound(b.begin(), b.end(),a[i])-b.begin();
		ans += (b.size() - index);
	}

	// for(auto i:a){
	// 	cout<<i<<" ";
	// }
	// cout<<"\n";

	// for(auto i:b){
	// 	cout<<i<<" ";
	// }
	// cout<<"\n";

	cout<<ans<<"\n";

}
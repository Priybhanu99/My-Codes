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

	string s;
	cin>>s;

	sort(s.begin(),s.end());
	cout<<s<<endl;
	while(next_permutation(s.begin(),s.end())){
		cout<<s<<endl;
	}
}


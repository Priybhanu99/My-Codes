#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e6;
// int dp[N];

vector<int> find_sequence(int n){ 

	if(n==0||n==1){
		vector<int> base;
		base.push_back(n);
		return base;
	}

	vector<int> a = find_sequence(floor(n/2));
	vector<int> b = find_sequence(n%2);
	vector<int> c = a;

	merge(b.begin(), b.end(),c.begin(), c.end(),back_inserter(a));
	return a;

}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n;
	cin>>n;

	vector<int> ans = find_sequence(n);
	for(auto i:ans){
		cout<<i<<" ";
	}


}


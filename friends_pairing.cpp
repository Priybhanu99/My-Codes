#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int N = 1e5

int no_of_ways(int n){
	if(n==0||n==1){
		return 1;
	}

	int ans = no_of_ways(n-1)+(n-1)*no_of_ways(n-2);
	return ans;
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

	int ans = no_of_ways(n);
	cout<<ans;
}


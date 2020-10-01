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

	int n,m,a;
	cin>>n>>m>>a;

	int x = n/a;
	int y = m/a;

	n = n%a;
	m = m%a;


	if(n!=0){
		x++;
	}
	if(m!=0){
		y++;
	}

	cout<<x*y;
}


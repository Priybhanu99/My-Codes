#include <bits/stdc++.h>
using namespace std;

#define ld long double

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	   #endif

	int n;
	cin>>n;

	ld ans = 1; 
	for(int i=1;i<=n;i++){
		ans *= i;
	}

	string res = to_string(ans);
	cout<<res;
}


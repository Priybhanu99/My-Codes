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

	int t;
	cin>>t; while(t--){

		int n,k;
		cin>>n>>k;

		string s(n,'a');

		for(int i=n-2;i>=0;i--){

			if(k<=(n-i-1)){
				s[i] = 'b';
				s[n-k] = 'b';
				break;
			}

			k -= (n-i-1);
		}

		cout<<s<<"\n";

	}
}

// aaabb
// aabab
// baaba
// bbaaa
// abb
// bab
// aaaaabaaaaabaaaaaaaa

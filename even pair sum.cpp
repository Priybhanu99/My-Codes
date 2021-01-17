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
	//  #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	//  #endif

	int t;
	cin>>t; while(t--){

		int a,b;
		cin>>a>>b;

		int ans = 0;
		int x = a/2;
		if(a%2){
			x++;
		}

		int y = b/2;
		if(b%2){
			y++;
		}
		int no_of_odd = x*y;
		int no_of_even = (a/2)*(b/2);

		cout<<no_of_even + no_of_odd<<"\n";

	}

}
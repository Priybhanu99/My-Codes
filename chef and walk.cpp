#include <bits/stdc++.h>
using namespace std;

#define int long long int

int mod = 1e9 + 7;

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

		// int zero = pow(k,2) - k;
		// cout<<zero<<" ";
		// cout<<zero + n*n<<"\n";

		int first_occ = n*n;
	
		cout<<first_occ<<" ";
		
		int x;
		int y = (n*k)+k;

		cout<<y<<" ";

		if(y-first_occ<0){
			x=0;
		}else{
			x = y-first_occ; 
		}

		cout<<first_occ+x<<"\n";

	}
}


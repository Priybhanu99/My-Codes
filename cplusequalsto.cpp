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

		int a,b,n;
		cin>>a>>b>>n;

		int count = 0;

		while(max(a,b)<=n){

			if(a>b){
				b += a;
			}else{
				a += b;
			}
			count++;
		}

		cout<<count<<"\n";
	}
}


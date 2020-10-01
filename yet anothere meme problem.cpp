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

		int a,b;
		cin>>a>>b;

		int x = 10;
		bool flag = true;
		int count = 0;

		while(flag){
			if((x-1)<=b){
				count += a;
			}else if((x-1)>b){
				flag = false;
			}

			x = x*10;

		}

		cout<<count<<"\n";

	}
}


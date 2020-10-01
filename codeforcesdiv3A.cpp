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

	int t,n;
	cin>>t; while(t--){

		int a,b;
		cin>>a>>b;
		if(a%b==0){
			cout<<"0\n";
		}else{
			cout<<  ((a/b)*b + b)-a<<"\n";
		}
	}
}


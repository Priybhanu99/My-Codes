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

		int n,a,b,c,d;
		cin>>n>>a>>b>>c>>d;

		int min = (a-b)*n;
		int max = (a+b)*n;

		if(( (c-d)<=min && (c+d)>=min || (c-d)<=max && (c+d)>=max ) || (min<(c-d) && max>(c+d)) ){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}
	}
}


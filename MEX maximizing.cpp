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

	
	int n,x;
	cin>>n>>x;

	int mex = 0;
	while(n--){
		int num;
		cin>>num;
		if(num-x<=mex){
			cout<<++mex<<"\n";
		}else{
			cout<<mex<<"\n";
		}
	}
}


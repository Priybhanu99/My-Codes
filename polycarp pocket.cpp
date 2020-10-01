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
	//cin>>t; while(t--){

	cin>>n;
	map<int,int> m;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		m[num] ++;
	}

	int mxm = 0;
	for(auto i:m){
		mxm = max(mxm,i.second);
	}

	cout<<mxm;

	//}
}


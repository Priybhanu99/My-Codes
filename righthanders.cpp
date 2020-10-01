#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int32_t main(){
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	//cin>>t; while(t--){

	int n;
	cin>>n;

	string s;
	getline(cin,s);

	for(int i=0;i<n/2;i++){
		int l = i,r = n-i-1;
		// cout<<l<<" "<<r<<"\n";
		if(s[l]=='R'&& s[r]=='L'){
			cout<<r+1<<" "<<l+1<<"\n";
		}else{
			cout<<l+1<<" "<<r+1<<"\n";
		}
	}

	//}

}
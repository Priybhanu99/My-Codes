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

		cin>>n;
		int a[n];
		set<int> set;
		for(int i=0;i<n;i++){
			cin>>a[i];
			set.insert(a[i]);
		}

		cout<<set.size()<<"\n";

	}
}


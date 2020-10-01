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
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	//cin>>t; while(t--){

	int n;
	cin>>n;

	int a[n],c[n];
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		a[i] = x;
		c[i] = y;
	}



	// if(is_sorted(a,a+n)){
	// 	cout<<"YES\n";
	// 	return 0;
	// }

	// for(int i = 1;i<n;i++){
	// 	if(c[i]==c[i-1]){
	// 		sort(a,a+i-1);
	// 		if(a[i-1]>a[i]){
	// 			cout<<"NO\n";
	// 			return 0;
	// 		}
	// 	}
	// }

	// cout<<"YES\n";

	vector<int> index;
	index.pb(0);

	for (int i = 0; i < n-1; ++i)
	{
		if(c[i]==c[i+1]){
			index.pb(i);
			index.pb(i+1);
		}
	}

	index.pb(n);

	for(int i=0;i<index.size()-1;i+=2){


		int l = index[i];
		int r = index[i+1];

		// cout<<l<<" "<<r<<"\n";
		sort(a+l,a+r);
	}

	if(is_sorted(a,a+n)){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}


	//}

}
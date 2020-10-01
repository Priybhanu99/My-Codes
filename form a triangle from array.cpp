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

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	sort(a,a+n);

	bool ans = false;
	for(int i=0;i<n-2;i++){

		if(a[i]+a[i+1] > a[i+2]){
			ans = true;
			break;
		}

	}



	if(ans){
		cout<<"YES\n";
	}else{cout<<"NO\n";}



	//}

}
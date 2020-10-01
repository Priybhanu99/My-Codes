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

	int a[2*n];
	for(int i=0;i<2*n;i++){
		cin>>a[i];
	}

	sort(a,a+2*n);

	if(a[n-1]!=a[n]){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}



	//}

}
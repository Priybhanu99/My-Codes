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

	int ans = 1;
	int l=0,r=0;

	while(r<n-1){

		if(a[r]*2>=a[r+1]){
			r++;
		}else{
			l = r = r+1;
		}
		ans = max(ans,r-l+1);


	}

	cout<<ans;
	//}

}
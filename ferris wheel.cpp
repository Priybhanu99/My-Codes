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

	int n,w;
	cin>>n>>w;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	sort(a,a+n);

	int l = 0,r=n-1;
	int ans = 0;


	while(l<=r){
		if(l==r){
			ans++;
			break;
		}
		if(a[l]+a[r]<=w){
			ans++;
			l++;
			r--;
		}else{
			ans++;
			r--;
		}
	}

	cout<<ans;
	//}

}
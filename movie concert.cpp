#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

bool cmp(P a,P b){
	if(a.S!=b.S){
		return a.S<b.S;
	}
	
	return a.F<b.F;
}

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

	P a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].F>>a[i].S;
	}

	sort(a,a+n,cmp);
	
	int ans = 1;
	int curr = a[0].S;

	for(int i=1;i<n;i++){

		if(curr<=a[i].F){
			ans++;
			curr = a[i].S;
		}
	}

	cout<<ans;
	//}

}
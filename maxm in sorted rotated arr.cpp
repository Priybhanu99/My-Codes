#include <bits/stdc++.h>
using namespace std;

#define int long long int

int findmaxm(int *a,int l,int r){

	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid]>a[l]){
			l = mid;
		}else if(a[mid]<a[l]){
			r = mid-1;
		}else{
			return a[mid];
		}
	}
	return INT_MAX;
}

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
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int ans = findmaxm(a,0,n-1);
	cout<<ans;

	//}
}


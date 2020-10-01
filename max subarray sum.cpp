#include <bits/stdc++.h>
using namespace std;

#define int long long int

int maxcrossingsum(int *a,int l,int mid,int r){

	int ls = 0;
	int sum1 = INT_MIN;
	for(int i = mid;i>=l;i--){
		ls += a[i];
		if(ls>sum1){
			sum1 = ls;
		}
	}

	int rs = 0;
	int sum2= INT_MIN;
	for(int i=mid+1;i<=r;i++){
		rs += a[i];
		if(rs>sum2){
			sum2 = rs;
		}
	}

	return sum1+sum2;
}

int maxmss(int *a,int l,int h){

	if(l==h){
		return a[l];
	}

	int mid = (l+h)/2;

	int ls = maxmss(a,l,mid);
	int rs = maxmss(a,mid+1,h);
	int ms = maxcrossingsum(a,l,mid,h);

	return max(max(ls,rs),ms);

}

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
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int ans = maxmss(a,0,n-1);
		cout<<ans<<endl;

	}
}


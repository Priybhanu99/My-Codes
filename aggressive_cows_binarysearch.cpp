#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool check(int *a,int mid,int c,int n){

	int count = 1,prev = a[0];
	for (int i = 1; i < n; ++i)
	{
		int dist = a[i]-prev;
		if(dist>=mid){
			count++;
			prev = a[i];
		}
	}

	return count>=c;

}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif
	
	int n,c;
	cin>>n>>c;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	sort(a,a+n);

	int lo = 1;
	int hi = 1e5;

	
	int ans;
	while(lo<=hi){
		int mid = (lo+hi)/2;
		if(check(a,mid,c,n)){
			lo = mid+1;
			ans = mid;
		}else{
			hi = mid-1;
		}
	}

	cout<<ans;


}


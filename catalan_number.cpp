#include <bits/stdc++.h>
using namespace std;

#define int long long int

int find_ncr(int n,int r){

	if(r==0||r==n){
		return 1;
	}

	int ans = find_ncr(n-1,r-1)+find_ncr(n-1,r);
	return ans;

}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n;
	cin>>n;

	int ans = find_ncr(2*n,n);
	cout<<ans/(n+1);
}


#include <bits/stdc++.h>
using namespace std;


int solve(int *a,int l,int r){

	//db(l,r,chance);

	if(l>r){
		return 0;
	}

	int ans,a1,a2;

	a1 = a[r] + min(solve(a,l,r-2),solve(a,l+1,r-1));

	a2 = a[l] + min(solve(a,l+1,r-1),solve(a,l+2,r));

	ans = max(a1,a2);

	return ans;
}

int main(){
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


	int ans = solve(a,0,n-1);
	cout<<ans<<endl;
	//}
}


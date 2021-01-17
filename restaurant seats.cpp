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

	int a[n],b[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i]>>b[i];
	}

	sort(a,a+n);
	sort(b,b+n);

	int i=0,j=0;

	int plat = 0,ans= 0;

	while(i<n && j<n){
		if(a[i]<b[j]){
			i++;
			plat++;
			ans = max(ans,plat);
		}else{
			j++;
			plat--;
		}
	}

	cout<<ans;
	//}

}
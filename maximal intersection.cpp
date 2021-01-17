#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int find_dist(P a){
	return a.S-a.F;
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

	vector<P> pre(n),suff(n);


	for (int i = 0; i < n; ++i)
	{
		if(i==0){
			pre[i] = a[i];
		}else{
			pre[i] = {max(pre[i-1].F,a[i].F),min(pre[i-1].S,a[i].S)};
		}
	}

	for(int i=n-1;i>=0;i--){
		if(i==n-1){
			suff[i] = a[i];
		}else{
			suff[i] = {max(suff[i+1].F,a[i].F),min(suff[i+1].S,a[i].S)};
		}
	}

	// for(auto i:pre){
	// 	cout<<i.F<<" "<<i.S<<"\n";
	// }

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		
		if(i==0){
			ans = max(ans,find_dist(suff[1]));
		}else if(i==n-1){
			ans = max(ans,find_dist(pre[i-1]));
		}else{
			int temp = find_dist({max(pre[i-1].F,suff[i+1].F),min(pre[i-1].S,suff[i+1].S)});
			ans = max(ans,temp);
		}
		// cout<<ans<<" ";
	}

	cout<<ans;

	//}

}
#include <bits/stdc++.h>
using namespace std;

#define ll long long

map<ll int,ll int> dp;

ll int max_gold(ll int n){
	if(n==0||n==1){
		dp[n] = n;
		return n;
	}

	if(dp.find(n)!=dp.end()){
		return dp[n];
	}

	ll int ans,a1=0,a2=0,a3=0;

	//if(n%2==0){
		a1 = max_gold(n/2);
	//}
	//if(n%3==0){
		a2 = max_gold(n/3);
	//}
	//if(n%4==0){
		a3 = max_gold(n/4);
	//}//

	ans = max(n,a1+a2+a3);

	dp[n] = ans;

	return ans;

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL); 
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	    #endif
	ll int t,n;
	//cin>>t; while(t--){

	cin>>n;
	ll int ans  = max_gold(n);
	cout<<ans;

	//}
}


#include <bits/stdc++.h>
using namespace std;

#define int long long int

int solve(int a,int b,int k){

	int res=1;
	while(b>0){
		if(b&1==1){
			res = (res*a)%k;
		}
		a = (a*a)%k;
		b = b>>1;
	}

	return res;


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
	
	int mod = 1000000007;
	cout<<solve(n,mod-2,mod);
	//cout<<solve(3,5,1000);


}


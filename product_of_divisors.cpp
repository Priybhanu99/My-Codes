#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n;
	cin>>n;

	//finding the no of divisors
	int count = 0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			if(i*i == n){
				count += 1;
			}else{
				count += 2;
			}
		}
	}

	int ans;
	if(count%2==0){
		ans = pow(n,count/2);
	}else{
		ans = pow(n,count/2)*sqrt(n);
	}

	cout<<ans;
}


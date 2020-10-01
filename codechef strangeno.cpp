#include <bits/stdc++.h>
using namespace std;

#define int long long int

int solve(int n, int k) 
{ 
	int count = 0;
	while (n%2 == 0) 
	{
		count++;
		n /= 2; 
	} 

	for (int i=3; i*i<=n; i=i+2) 
	{ 
		while (n%i == 0) 
		{ 
			n = n/i; 
			count++;
		} 
	} 

	
	if (n > 2) {
		count++;
	}
	
	if (count < k) 
	{ 
		return -1;
	} 

	return 1; 
} 

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int x,k;
		cin>>x>>k;

		if(x >= pow(2,k)){

			int ans = solve(x,k);
			if(ans==1){
				cout<<"1\n";
			}else{
				cout<<"0\n";
			}
		}else{
			cout<<"0\n";
		}

	}
}


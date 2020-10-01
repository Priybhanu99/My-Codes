#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	int a,b;
	int mod;
	cin>>a>>b;
	cin>>mod;

	int ans =1;

	while(b>0){
		if(b&1){
			ans *= a%mod; 
		}
		a *= a%mod;
		b = b>>1;
	}

	cout<<ans;
}


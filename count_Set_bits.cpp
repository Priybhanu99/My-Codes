#include <bits/stdc++.h>
using namespace std;

int count_set_bits(int n){

	if(n==0){
		return 0;
	}
	int ans = 0;
	while(n>0){
		n = n&(n-1);
		ans++;
		n = n>>1;
	}

	return ans;


}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	int t;
	cin>>t;

	while(t--){
		int a,b;
		cin>>a>>b;

		int ans =0;
		for(int i=a;i<=b;i++){
			ans += count_set_bits(i);
		}

		cout<<ans<<endl;

	}
}


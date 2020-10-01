#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t,n;
	int prime[]={2,3,5,7,11,13,17,19};
	cin>>t; while(t--){

	cin>>n;

	int ans = 0;

	//to iterate over all numbers upto 2^n - 1
	for(int i=1;i<(1<<8);i++){

		//for particular number(i) , we prepare denominator by multiply a set bit positions
		int setbits = __builtin_popcount(i);
		int denominator = 1;

		for(int j=0;j<=7;j++){
			if(i&(1<<j)){
				denominator = denominator*prime[j];
			}
		}		

		if(setbits%2!=0){//if setbits of the no is odd then add it to the ans
			ans += n/denominator;
		}else{
			ans -= n/denominator; 
		}

	}		
		cout<<ans<<endl;
	}

}



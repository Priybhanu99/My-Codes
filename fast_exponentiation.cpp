#include <bits/stdc++.h>
using namespace std;


int powr(int a,int b){
	int ans = 1;
	//while b !=0(doesnot contain any set bit)
	while(b>0){
		//if there is a set bit then b&1 = 1
		if(b&1){
			ans *= a;
		}
		b = b>>1;
		a *= a;

	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t,n;
	//cin>>t;
	//while(t--){

		int a,b;
		cin>>a>>b;

		int ans = powr(a,b);
		cout<<ans;

	//}
}


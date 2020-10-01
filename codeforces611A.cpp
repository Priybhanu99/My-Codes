#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t; while(t--){

		int hrs,mins;
		cin>>hrs>>mins;

		int ans = 0;


		ans = (24-hrs-1)*60 + (60-mins);


		cout<<ans<<endl;
	}
}


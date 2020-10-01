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

	int t,n;
	cin>>t; while(t--){

		
		int rows,cols;
		cin>>rows>>cols;

		if(rows==1){
			cout<<"YES\n";
			continue;
		}

		if(rows==2&&cols==2){
			cout<<"YES\n";
			continue;
		}

		if(rows<2 || cols<2){
			cout<<"YES\n";
			continue;
		}
		cout<<"NO\n";



	}
}


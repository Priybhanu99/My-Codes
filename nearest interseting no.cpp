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
	//cin>>t; while(t--){

	cin>>n;
	
	while(1){
		int temp   = n;
		int sum = 0;
		while(temp>0){
			sum += temp%10;
			temp/=10;
		}

		if(sum%4==0){
			break;
		}
		
		n = n+(sum%4);
	}

	cout<<n<<"\n";

	//}
}


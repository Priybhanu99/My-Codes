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

		cin>>n;

		int i;
		int c = 0;
		int k = 0;
		for(i=2;i<=30;i++){
			
			if(n%((int)pow(2,i)-1)==0){
				k = pow(2,i)-1;
				break;
			}
		}

		cout<<n/k<<"\n";
	}
}


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
		int a[n];

		int odd = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2!=0){
				odd++;
			}
		}

		if(odd==0||(odd==n && n%2==0)){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		}

	}
}


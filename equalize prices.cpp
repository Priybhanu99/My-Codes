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
		int sum = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum += a[i];
		}

		if(sum%n==0){
			cout<<sum/n<<"\n";
		}else{
			cout<<(sum/n)+1<<"\n";
		}

	}
}


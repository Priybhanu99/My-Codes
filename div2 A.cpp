#include <bits/stdc++.h>
using namespace std;

#define int long long int


int f(int n){
	int ans = 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			ans = i;
			break;
		}
	}

	if(ans == 0){
		return n;
	}

	return ans;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int n,k;
		cin>>n>>k;
		
		//cout<<f(n);
		n = f(n)+n;
		if(k>1){
			n = n + (k-1)*2;
		}

		cout<<n<<"\n";

	}
}


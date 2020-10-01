#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

bool fun(int* a,int n,int i,int sum){
	if(i==n){
		return (sum==0);
	}

	bool ans = fun(a,n,i+1,sum+a[i]) || fun(a,n,i+1,sum+a[i]-(i+1));
	return ans;
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	//  #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	//  #endif

	int t;
	cin>>t; while(t--){

		int n;
		cin>>n;

		int a[n];



		int sum = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum += a[i];
		}

		if(n==1){
			if(a[0]>=0){
				cout<<"YES\n";
			}else{
				cout<<"NO\n";
			}
			continue;
		}
		int total =(n*(n+1))/2;
		if(sum>=0){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

		// bool ans = fun(a,n,0,0);
		// if(ans){
		// 	cout<<"YES\n";
		// }else{
		// 	cout<<"NO\n";
		// }

	}

}
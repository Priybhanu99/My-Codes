#include <bits/stdc++.h>
using namespace std;

#define int long long int

int findgcd(int* a,int n){
	int ans = a[0];
	for(int i=1;i<n;i++){
		ans = __gcd(ans,a[i]);
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

	int t,n;
	//cin>>t; while(t--){

	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int x = findgcd(a,n);
	//cout<<x<<"\n";


	int count = 0;

	for(int i=1;i*i<=x;i++){

		if(x%i==0){
			if(i*i==x){
				count++;
			}else{
				count += 2;
			}
		}
	}

	cout<<count;

	//}
}


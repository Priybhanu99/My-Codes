#include <bits/stdc++.h>
using namespace std;

#define int long long int

int findlcm_m(int arr[], int n) 
{ 
   
	int ans = arr[0]; 

	for (int i = 1; i < n; i++) 
		ans = (((arr[i] * ans)) / 
			(__gcd(arr[i], ans))); 

	return ans; 
} 

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n,m;
	cin>>t; while(t--){

		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int lcm = findlcm_m(a,n);
		//cout<<lcm<<"\n";


		int ans=1;

		for(int i=1;i<=m;i++){
			int x = (lcm*i)/__gcd(lcm,i);
			//cout<<x<<" ";
			if(x>lcm){
				lcm = x;
				ans = i;
			}
		}

		cout<<ans<<"\n";

	}
}


#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t,n;
	//cin>>t; while(t--){

		 #ifndef ONLINE_JUDGE
		    freopen("input.txt","r",stdin);
		    freopen("output.txt","w",stdout);
		    #endif

		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int max[n+1];
		int xor1 =0;
		for (int i = 0; i < n; ++i)
		{
			xor1 ^= a[i];
		}

		max[n] = xor1;

		for (int i = 0; i < n; ++i)
		{
			max[i] = xor1^a[i];
		}

		int ans=0;
		for (int i = 0; i < n+1; ++i)
		{
			if(max[i]>ans){
				ans = max[i];
			}
		}

		cout<<ans<<endl;

	//}
}


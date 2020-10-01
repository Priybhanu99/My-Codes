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
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}


	int b[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}

	int count = 0;
	int count1 = 0;


	for (int i = 0; i < n; ++i)
	{
		if(a[i]==0 && b[i]==1){
			count++;
		}else if(a[i]==1 && b[i]==0){
			count1++;
		}
	}
	if((count==0 && count1==0) || count==n ||count1==0){
		cout<<"-1\n";

	}else{

		int x = count + 1;
		// cout<<count<<" "<<count1<<"\n";

		int ans = (count+count1)/count1;
		// if(x%count1==1){
		// 	ans++;
		// }

		cout<<ans<<"\n";

	}


	//}
}


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
	int a[n],b[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}

	int ans[n];
	for (int i = 0; i < n;i++){
		ans[i] = a[i]-b[i];
	}

	sort(ans,ans+n);

	int count = 0;
	int i=0;

	for(;i<n;i++){
		if(ans[i]<=0){
			int x = upper_bound(ans,ans+n,abs(ans[i])+1)-ans;
			count += (n-x);
		}else{
			break;
		}
	}

	int y = (n-i);
	//cout<<y<<" ";
	count += y;

	cout<<count<<"\n";

	//}
}


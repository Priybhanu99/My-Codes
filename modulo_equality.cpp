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

	int n,mod;
	cin>>n>>mod;

	int a[n],b[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}

	sort(a,a+n);
	sort(b,b+n);

	int ans = 0;
	bool flag = false;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]!=b[i]){
			ans = b[i]-a[i];
			if(ans%mod<0){
				cout<<mod+ans;
			}else{
				cout<<ans%mod;
			}
			flag = true;
			break;
		}
	}

	if(flag==false){
		cout<<"0";
	}

}


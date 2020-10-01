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

		int mnm = INT_MAX;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<mnm){
				mnm = a[i];
			}
		}

		//cout<<mnm<<" ";

		bool flag = true;
		for (int i = 0; i < n; ++i)
		{
			if(abs(a[i]-mnm)%2!=0){
				flag = false;
				break;
			}
		}

		if(flag==true){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}



	}
}


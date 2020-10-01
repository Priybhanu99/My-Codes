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
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int count = 0;

		for (int i = 0; i < n; ++i)
		{
			if(a[i]%2!=0){
				count++;
			}
		}

		if(count>0){
			if(count==n){
				if(n%2==0){
					cout<<"NO"<<endl;
				}else{
					cout<<"YES"<<endl;
				}
			}else{
				cout<<"YES"<<endl;
			}
		}else{
			cout<<"NO"<<endl;
		}

	}
}


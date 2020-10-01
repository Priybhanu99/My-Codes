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
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}


		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
		}

		int zero = 0;
		int pos = 0,neg = 0;

		bool flag = true;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]==b[i]){
				if(a[i]==0){
					zero++;
				}else if(a[i]>0){
					pos++;
				}else{
					neg++;
				}

				continue;
			}

			if(i==0){
				if(a[i]!=b[i]){
					flag = false;
					break;
				}
			}else{
				if(b[i]>a[i] && pos==0){
					flag  = false;
					break;
				}
				if(b[i]<a[i] && neg == 0){
					flag = false;
					break;
				}
			}
			if(a[i]==0){
				zero++;
			}else if(a[i]>0){
				pos++;
			}else{
				neg++;
			}

		}

		if(flag == true){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

	}
}


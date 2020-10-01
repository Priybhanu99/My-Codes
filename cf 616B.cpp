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
		// if(n==1){
		// 	cout<<"YES"<<endl;
		// 	continue;
		// }

		bool inc = false,dec = false;
		int count = 0;

		for (int i = 1; i < n; ++i)
		{
			if(a[i]>a[i-1]){
				if(dec==true){
					count++;
					dec = false;
					inc = true;
				}
			}
			else if(a[i]<a[i-1]){
				if(inc==true){
					count++;
					inc = false;
					dec = true;
				}
			}else{
				count += 2;
				continue;
			}

		}

		if(count<=1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}

	}
}


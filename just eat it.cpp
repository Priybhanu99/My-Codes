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
		int temp = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			temp += a[i];
		}

		int sum = 0;
		bool flag = true;
		for (int i = 0; i < n; ++i)
		{
			sum += a[i];
			if(sum<=0){
				flag = false;
				break;
			}
		}

		if(flag == false){
			cout<<"NO\n";
			continue;
		}

		sum = 0;
		flag = true;
		for(int i=n-1;i>=0;i--){
			sum += a[i];
			if(sum<=0){
				flag = false;
				break;
			}
		}

		if(flag == false){
			cout<<"NO\n";
			continue;
		}

		
		cout<<"YES\n";
		

	}

}


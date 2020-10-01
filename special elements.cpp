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
			int num;
			cin>>num;
			if(i==0){
				a[i] = num;
			}else{
				a[i] = num+a[i-1];
			}
		}

		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<n;j++){
				if(a[j]==(a[i]-a[i-1])){
					count++;
				}
			}
		}

		cout<<count<<"\n";

	}
}

// 5
// 1
// 0
// 4
// 0

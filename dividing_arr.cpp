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
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}

		sort(a,a+n);
		
		int min=0;
		for (int i = 0; i < n; ++i)
		{
			if(i%2==0){
				min+=a[i];
			}else{
				min= (min-a[i]);
			}
		}
		int max=0;
		for(int i=0;i<n/2;i++){
			max += a[n-i-1]-a[i];
		}

		cout<<abs(min)<<" "<<abs(max)<<endl;
	}
}


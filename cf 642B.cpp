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

	int t;
	cin>>t; while(t--){

		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int b[n];
		for(int i=0;i<n;i++){
			cin>>b[i];
		}

		sort(a,a+n);
		sort(b,b+n);

		int count = 0;
		int x=0;
		for(int i=n-1;i>=0;i--){
			if(count>=k){
				break;
			}

			if(a[x]<b[i]){
				a[x] = b[i];
				count++;
			}
			x++;
		}

		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			sum += a[i];
		}

		cout<<sum<<"\n";

	}
}


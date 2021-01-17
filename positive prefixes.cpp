#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

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
			
			a[i] = -1*(i+1);
		}

		for (int i = 0; i < 2; ++i)
		{
			if(k>0){

				a[i] = -a[i];
				k--;
			}
		}

		for (int i = 3; i <n; i+=2)
		{
			if(k>0){

				a[i] = -a[i];
				k--;
			}
		}

		if(k>0){
			for(int i=n-1;i>=0;i--){
				if(k>0 && a[i]<0){
					a[i] = abs(a[i]);
					k--;
				}
			}
		}

		for (int i = 0; i < n; ++i)
		{
			cout<<a[i]<<" ";
		}

		// int prefix = 0;
		// int count = 0;
		// for (int i = 0; i < n; ++i)
		// {
		// 	prefix += a[i];
		// 	if(prefix>0){
		// 		count++;
		// 	}
		// }

		// cout<<"\n count :"<<count<<"\n";
		cout<<"\n";

	}


}
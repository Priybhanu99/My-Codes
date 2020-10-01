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
	int tc = 0;
	cin>>t; while(t--){

		tc++;
		int n;
		cin>>n;

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int count = 1;
		int ans = 0;


		for(int i=1;i<n;i++){

			if(a[i]>a[i-1]){
				count++;
				if(count >4){
					// cout<<a[i]<<" ";
					count = 1;
					ans++;
				}
			}else if(a[i]<a[i-1]){
				count--;
			}
		}


		cout<<"Case #"<<tc<<": "<<ans<<"\n";



	}

}
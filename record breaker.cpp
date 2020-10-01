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

		int mxm = INT_MIN;
		int count = 0;

		for (int i = 0; i < n; ++i)
		{
			if(a[i]>mxm){
				if(i!=n-1){
					if(a[i]>a[i+1]){
						count++;
					}
				}else{
					count++;
				}
			}
			mxm = max(mxm,a[i]);
		}

		cout<<"Case #"<<tc<<": "<<count<<"\n";
	}

}
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

		int mnm = INT_MAX;
		int index = -1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<mnm){
				mnm = a[i];
				index = i;
			}
		}

		int count = 0;

		for (int i = 0; i < n; ++i)
		{
			if(index==i){
				continue;
			}
			count += (k-a[i])/mnm;
		}

		cout<<count<<"\n";

	}

}
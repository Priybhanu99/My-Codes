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
	//cin>>t; while(t--){

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int m;
	cin>>m;

	int b[n];

	for (int i = 0; i < m; ++i)
	{
		cin>>b[i];
	}

	int i = 0,x = 0;
	for(;i<min(n,m);i++){
		if(a[i]>b[x]){
			swap(a[i],b[x]);

			for(int j=i;j<m;j++){
				if(b[i]>b[j]){
					swap(b[i],b[j]);
				}else{
					break;
				}
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}

	//}

}
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

		int n,x;
		cin>>n>>x;
		int a[n];
		int index[1000];
		memset(index,0,sizeof(index));
		for(int i=0;i<n;i++){
			cin>>a[i];
			index[a[i]] = 1;
		}

		int i=1;
		int count = 0 ;
		for(;i<1000;i++){
			// cout<<i<<"-"<<index[i]<<"\n";
			if(index[i]==0&&count<x){
				count++;
				continue;
			}
			if(index[i]==0 && count==x){
				break;
			}
		}

		cout<<i-1<<"\n";



	}
}


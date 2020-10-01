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
	//cin>>t; while(t--){

	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}


	map<int,int> map;
	for (int i = 0; i < n; ++i)
	{
		for(int x=1;x*x<=a[i];x++){
			if(a[i]%x==0){
				if(x*x==a[i]){
					map[x]++;
				}else{
					map[x]++;
					map[a[i]/x]++;
				}
			}
		}
	}

	int count = 0;
	for(auto i:map){
		//cout<<i.first<<" "<<i.second<<"\n";
		if(i.second==n){
			//cout<<i.first<<" ";
			count++;
		}
	}

	//cout<<"\n";

	cout<<count;

	//}
}


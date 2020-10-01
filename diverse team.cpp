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
	//cin>>t; while(t--){

	int n,k;
	cin>>n>>k;
	
	map<int,int> map;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;

		map[num] = i+1;
	}

	if(map.size()<k){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
		int count = 0;
		for(auto i:map){
			cout<<i.second<<" ";
			count++;
			if(count>=k){
				break;
			}
		}
	}
	//}
}


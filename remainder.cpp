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

	int t,n,x,y;
	//cin>>t; while(t--){
	string num;
	cin>>n>>x>>y>>num;
	
	int count = 0;
	//cout<<n-y-1<<"\n";
	for(int i=n-x;i<n;i++){
		int bit= num[i]-'0';
		//cout<<bit<<" ";
		if(i==n-y-1){
			if(bit==0){
				count++;
				// cout<<i<<"hi";
			}
			continue;
		}
		if(bit==1){
			count++;
			// cout<<i<<" ";
		}
	}

	cout<<count<<"\n";
	//}
}


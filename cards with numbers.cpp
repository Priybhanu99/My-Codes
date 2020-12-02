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

	// int a[2*n];

	// map<int,int> m;
	map<int,vector<int>> index;
	for(int i=0;i<2*n;i++){
		// cin>>a[i];
		// m[a[i]]++;
		int num;
		cin>>num;

		index[num].pb(i+1);

	}



	bool flag = true;
	for(auto i:index){
		if(i.second.size()%2==1){
			flag = false;
			break;
		}
	}

	if(flag){
		for(auto i:index){
			for(int x=0;x<i.S.size();x+=2){
				cout<<i.S[x]<<" "<<i.S[x+1]<<"\n";
			}		
		}
	}else{
		cout<<"-1\n";
	}
	//}

}
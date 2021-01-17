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

	int n,m;
	cin>>n>>m;

	map<int,int> a;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;

		a[num]++;
	}

	int b[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>b[i];
	}


	for (int i = 0; i < m; ++i)
	{
		auto itr = a.lower_bound(b[i]);
		
		if((*itr).F!=b[i]){
			if(itr==a.begin()){
				cout<<"-1\n";
				continue;
			}else{
				itr--;
			}
		}
		cout<<(*itr).F<<"\n";
		if((*itr).S==1){
			a.erase((*itr).F);
		}else{
			a[(*itr).F]--;
		}
		
	}


	//}

}
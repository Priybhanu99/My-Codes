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

		int n;
		cin>>n;

		int a[n],b[n];

		map<int,int> map;

		bool flag = true;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(map.count(a[i])!=0){
				flag = false;
			}
			map[a[i]]++;
			// a[i] = pow(2,b[i]);
		}



		if(!flag){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}

}
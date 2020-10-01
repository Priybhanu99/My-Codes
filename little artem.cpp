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

		int n,m;
		cin>>n>>m;

		cout<<"W";
		for(int j=1;j<m;j++){
			cout<<"B";
		}
		cout<<endl;
		for(int i=1;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<"B";
			}
			cout<<endl;
		}

	}
}


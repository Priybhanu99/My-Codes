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
	cin>>t; while(t--){

		int a,b;
		cin>>a>>b;

		if(a<b){
			int diff = a-b;
			if(diff%2==0){
				//even
				cout<<"2";
			}else{
				cout<<"1";
			}
		}else if(a>b){
			int diff = b-a;
			if(diff%2==0){
				//even
				cout<<"1";
			}else{
				cout<<"2";
			}
		}else{
			cout<<"0";
		}

		cout<<"\n";
		
	}
}


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


		cin>>n;
		
		if(n==1){
			cout<<"1\n";
			cout<<"1 1\n";
			continue;
			
		}

		
		cout<<n/2<<"\n";


		if(n%2==0){
			for(int i=1;i<n;i+=2){
				cout<<"2 "<<i<<" "<<i+1<<"\n";
			}
		}else{
			cout<<"3 1 2 "<<n<<"\n";
			for(int i=3;i<n;i+=2){
				cout<<"2 "<<i<<" "<<i+1<<"\n";
			}
		}
	}
}


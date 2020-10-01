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
		vector<int> one,two;

		int even = 0;
		int odd = 0;

		if(n%4!=0){
			cout<<"NO\n";
			continue;
		}

		int c = 0;
		for(int i=1;i<=n/2;i++){
			one.push_back(2*i);
			even += 2*i;
			// c++;
			// if(c==n/2){
			// 	break;
			// }
		}

		c=0;
		for(int i=1;i<n/2;i++){
			two.push_back(2*i-1);
			odd += 2*i-1;
			c++;
			// if(c == (n/2)-1){
			// 	break;
			// }
		}

		// if((even-odd)%2==0){
		// 	cout<<"NO\n";
		// 	continue;
		// }
		cout<<"YES\n";

		two.push_back(even-odd);

		for(auto i:one){
			cout<<i<<" ";
		}
		for(auto i:two){
			cout<<i<<" ";
		}

		cout<<"\n";
	}
}


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

		int n,k;
		cin>>n>>k;
		
		vector<int> factors;
		for(int i=1;i*i<=n;i++){
			if(n%i==0){
				if(i*i==n){
					factors.push_back(i);
				}else{
					factors.push_back(i);
					factors.push_back(n/i);
				}
				//n = n/i;
			}
		}

		// if(n!=1){
		// 	factors.push_back(n);
		// }



		sort(factors.begin(), factors.end());
		// for(auto i:factors){
		// 	cout<<i<<" ";
		// }

		// cout<<"\n";

		int index = lower_bound(factors.begin(), factors.end(),k)-factors.begin();
		//cout<<"index :"<<index<<"\n";

		if(factors[index]==k){
			cout<<n/k<<"\n";
			continue;
		}
		if(index==0){
			cout<<n<<"\n";
			continue;
		}
		if(factors.size()==2){
			if(index==1 && factors[index]==k){
				cout<<"1\n";
				continue;
			}
		}
		cout<<n/(factors[index-1])<<"\n";

	}

}

// 	2
// 8
// 1
// 999999733
// 1




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

	int n;
	cin>>n;

	if(n==1){
		cout<<"9";
		return 0;
	}

	set<int> set;
	set.insert(n);
	//int count = 0;
	//n++;
	while(n){
		//cout<<n<<",";
		
		n++;
		if(n%10==0){
			while(n%10==0){
				n/=10;
			}
		}
		if(set.count(n)!=0){
			break;
		}

		//cout<<n;
		set.insert(n);
	}

	cout<<set.size()<<"\n";
	// for(auto i:set){
	// 	cout<<i<<" ";
	// }
}


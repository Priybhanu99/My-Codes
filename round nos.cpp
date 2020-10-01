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
		vector<int> ans;

		if(n==0){
			cout<<"1\n0\n";
			continue;
		}

		int i = 0;
		while(n>0){

			int rem = n%10;
			if(rem!=0){
				ans.push_back(rem*(int)pow(10,i));
			}
			n /= 10;
			i++;
		}
		cout<<ans.size()<<"\n";
		for(auto i: ans){
			cout<<i<<" ";
		}

		cout<<"\n";

	}
}


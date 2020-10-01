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

		vector<int> index;

		int temp = n;

		int count = 0;

		while(temp){
			int rem = temp%3;
			index.push_back(rem);
			count++;
			temp /= 3;
		}

		reverse(index.begin(), index.end());

		int ans = 0;
		int mult = pow(3,index.size()-1);
		
		int pos = -1;
		for(auto i:index){
			if(i==2){
				pos = i;
			}

			ans += mult*(i);
			mult /= 3;

		}


		if(pos==-1){
			cout<<ans<<"\n";
			continue;
		}

		int pos0 = find(index.begin()+pos,index.end(),0)-index.begin();
		index[pos0] = 1;

		for(int i=pos0;i>=0;i--){
			index[i] = 0;
		}

		ans = 0;
		mult = pow(3,index.size());
		for(auto i:index){
			ans += mult*(i);
			mult /= 3;
		}

		cout<<ans;
		cout<<"\n";

	}
}

// 1
// 3
// 9
// 13
// 27
// 6561
// 19683

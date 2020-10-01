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
		list<int> a;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			a.push_back(num);
		}

		int count = 0;
		int sum_alice = 0;
		int sum_bob = 0;

		int sa = 0;
		int sb = 0;

		while(!a.empty()){
			if(count%2==0){
				//alice move
				sa = 0;
				while(sa<=sb && a.size()!=0){
					sum_alice += a.front();
					sa+= a.front();
					a.pop_front();
				}

			}else{
				sb = 0;
				while(sb<=sa && a.size()!=0){
					sum_bob += a.back();
					sb += a.back();
					a.pop_back();
				}
			}

			count++;
		}

		cout<<count<<" "<<sum_alice<<" "<<sum_bob<<"\n";

	}
}

// 6 23 21
// 1 1000 0
// 2 1 2
// 6 45 46
// 2 2 1
// 3 4 2
// 4 4 3

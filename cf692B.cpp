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

		int temp = n;

		while(1){
			bool flag = true;
			

			temp = n;

			while(temp){
				int rem = temp%10;
				if(rem!=0){
					if(n%rem!=0){
						flag = false;
						break;
					}
				}
				temp/=10;
			}

			if(flag){
				break;
			}

			n += 1;
		}

		cout<<n<<"\n";

		// cout<<temp%8<<" ";
		// vector<int> a;

		// while(temp){
		// 	a.pb(temp%10);
		// 	temp/=10;
		// }


		// cout<<a.size()<<" ";

		// for(auto i:a){
		// 	cout<<i<<" ";
		// }

		// vector<int> ans;
		// for(auto i:a){
		// 	if(i!=0){
		// 		if(n%i!=0){
		// 			ans.pb(n%i);
		// 		}
		// 	}
		// }

		// int add = 0;
		// for(auto i:ans){
		// 	add = __gcd(add,i);
		// }

		// if(ans.size()==0){
		// 	cout<<n<<"\n";
		// 	continue;
		// }

		// while(1){
		// 	bool flag = true;

		// 	n += add;
		// 	int temp = n;
		// 	while(temp){
		// 		int rem = temp%10;
		// 		if(rem!=0){
		// 			if(n%rem!=0){
		// 				flag = false;
		// 				break;
		// 			}
		// 		}
		// 		temp/=10;
		// 	}

		// 	if(flag){
		// 		break;
		// 	}
		// }

		// cout<<n<<"\n";
	}

}
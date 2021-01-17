#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int no_of_digits(int n){
	int temp = 0;
	while(n){
		temp++;
		n/=10;
	}

	return temp;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;


	vector<int> a;
	a.pb(1);
	a.pb(11);
	a.pb(111);
	a.pb(1111);

	for(int i=2;i<=9;i++){
		for(int j=0;j<4;j++){
			a.pb(i*a[j]);
		}
	}

	// for(auto i:a){
	// 	cout<<i<<" ";
	// }
	cin>>t; while(t--){

		int n;
		cin>>n;

		int ans = 0;
		bool flag = 0;
		for(auto i:a){
			if(flag==1){
				break;
			}

			ans += no_of_digits(i);
			if(i==n){
				flag = 1;
			}
		}

		cout<<ans<<"\n";

	}

}
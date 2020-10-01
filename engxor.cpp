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
		int q;
		cin>>q;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int even=0;
		int odd = 0;
		for (int i = 0; i < n; ++i)
		{
			if(__builtin_popcount(a[i])%2==0){
				even++;
			}else{
				odd++;
			}
		}

		for (int i = 0; i < q; ++i){
			int p;
			cin>>p;
			int no = __builtin_popcount(p);
			if(no%2==0){
				cout<<even<<" "<<odd<<endl;
			}else{
				cout<<odd<<" "<<even<<endl;
			}
		}
	}
}


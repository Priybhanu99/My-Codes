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
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int lastele  = 0 + a[n%n];

		//map<int,int> map;
		bool flag = true;
		for (int i = 1; i < n; ++i)
		{
			int x = i+a[(n+i)%n];
			// if(map.count(x)==0){
			// 	map[i] = x;
			// }else{
			// 	flag = false;
			// 	break;
			// }
			if(abs(lastele-x)>=2){
				flag = false;
				cout<<i<<" ";
				break;
			}

		}

		if(flag == true){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

	}
}


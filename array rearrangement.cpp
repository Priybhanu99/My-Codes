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

		int n,x;
		cin>>n>>x;

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int b[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
		}

		sort(a,a+n);
		sort(b,b+n);

		reverse(b,b+n);

		// if(((a[n-1] + b[0]) <=x) &&(( b[n-1] + a[0] )<=x)){
		// 	cout<<"Yes\n";
		// }else{
		// 	cout<<"No\n";
		// }

		bool flag = true;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]+b[i]>x){
				flag = false;
				break;
			}
		}

		if(flag){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}
	}

}
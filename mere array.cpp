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

		int a[n];
		int b[n];

		int mnm = INT_MAX;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i] = a[i];

			if(a[i]<mnm){
				mnm = a[i];
			}
		}

		sort(b,b+n);

		bool flag = true;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				if(a[i]%mnm!=0){
					// cout<<mnm<<" ";
					flag = false;
					break;
				}
			}
		}

		if(flag){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}


	}

}
//2 3 4 6 6 9
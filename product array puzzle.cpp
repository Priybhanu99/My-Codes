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
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int prefix[n],suffix[n];

		prefix[0] =  1,suffix[n-1] = 1;

		for(int i=1;i<n;i++){
			prefix[i] = prefix[i-1]*a[i-1];
		}

		for(int i=n-2;i>=0;i--){
			suffix[i] = suffix[i+1]*a[i+1];
		}
		
		for(int i=0;i<n;i++){
			cout<<prefix[i]*suffix[i]<<" ";
		}

		cout<<"\n";

	}

}
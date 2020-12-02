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
	//cin>>t; while(t--){

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	sort(a,a+n);

	int ans = 0;


	for (int i = 0; i < n; ++i)
	{
		
		if(a[i]>=i+1){
			a[i] = i+1;
		}

		if(i>0){

			if(a[i-1]<a[i]){
				a[i] = a[i-1]+1;
			}else{
				a[i] = a[i-1];
			}

		}
	}
	cout<<a[n-1]+1<<"\n";

	//}

}
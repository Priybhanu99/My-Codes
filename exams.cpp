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

	P a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].F>>a[i].S;
	}

	sort(a,a+n);

	int temp = 0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i].S>=temp){
			temp = a[i].S;
		}else{
			temp = a[i].F;
		}
	}

	cout<<temp<<"\n";
	//}

}
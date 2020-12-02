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

	int a[3];
	for (int i = 0; i <= 2; ++i)
	{
		cin>>a[i];
	}

	sort(a,a+3);

	cout<<(a[2]*a[1] + a[1]*a[0])<<"\n";

	//}

}
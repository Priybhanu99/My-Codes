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
	//cin>>t; while(t--){

	cin>>n;
	int a[n];

	int count[2] = {0,0};

	for (int i = 0; i < n; ++i)
	{
		int num;
		cin>>num;
		a[i] = num%2;
		count[a[i]]++;
	}

	cout<<min(count[0],count[1])<<"\n";



	//}
}


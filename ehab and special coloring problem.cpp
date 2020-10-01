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

	
	int n;
	cin>>n;

	int a[n-1];

	int count = 1;
	for(int i=0;i<n/2;i++){
		a[i] = count++;
	}

	for(int i=n/2;i<n-1;i++){
		a[i] = count--;
	}


	for (int i = 0; i < n-1; ++i)
	{
		cout<<a[i]<<" ";
	}

}
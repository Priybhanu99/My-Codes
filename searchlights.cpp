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

	int n,m;
	cin>>n>>m;

	int x = 0,y= 0;
	int arr[n][2];
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;

		arr[i][0] = a;
		arr[i][1] = b;
	}

	int count = 0;
	for (int i = 0; i < m; ++i)
	{
		int a,b;
		cin>>a>>b;

		x = max(x,a);
		y = max(y,b);
		// int temp = min(x-a,y-b);
		// count += max(0LL,temp);
	}



	int counta = 0;
	int countb = 0;
	for (int i = 0; i < n; ++i)
	{
		counta += max(0LL,x-arr[i][0]);
		countb += max(0LL,y-arr[i][1]);
	}

	cout<<max(counta,countb)<<"\n";



}
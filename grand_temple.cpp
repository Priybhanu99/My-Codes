#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int n;
	cin>>n;

	int x[n],y[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>x[i];
		cin>>y[i];
	}

	sort(x,x+n);
	sort(y,y+n);

	for (int i = n-1; i >=1 ; i--)
	{
		x[i] = x[i]-x[i-1];
		y[i] = y[i]-y[i-1];
	} 

	int max_x= INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		if(max_x<x[i]){
			max_x  =x[i];
		}
	}

	int max_y= INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		if(max_y<y[i]){
			max_y  =y[i];
		}
	}

	int ans = (max_y-1)*(max_x-1);
	cout<<ans;

}


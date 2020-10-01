#include<bits/stdc++.h>
using namespace std;

int solve(int *a,int n){

	if(n==0){
		return INT_MIN;
	}

	int ans = INT_MIN;
	for (int i = 0; i <n; ++i)
	{
		ans = max(ans,a[i]+solve(a,n-i-1));
	}

	return ans;
}

int main(){

	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	    #endif

	int n;
	cin>>n;

	int a[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	int ans = solve(a,n);
	cout<<ans;
}
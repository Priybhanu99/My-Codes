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

	int n,k;
	cin>>n>>k;

	int a[n];

	a[0] = 1;
	int low = 1, high = 1;
	for (int i = 1; i <= k; i++) {
		if (i % 2 == 1) {
			a[i] = ++high;
		} else {
			a[i] = --low;
		}
	}
	for (int i = k + 1; i < n; i++) {
		if (a[k] == low) {
			a[i] = a[i - 1] - 1;
		} else {
			a[i] = a[i - 1] + 1;
		}
	}
	int smallest = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < smallest) {
			smallest = a[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (i > 0) printf(" ");
		printf("%d", a[i] - smallest + 1);
	}

}
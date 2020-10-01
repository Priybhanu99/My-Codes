#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int n;
int solve(int *a,int ele){


	int sum = 0;

	for(int i=0;i<n;i++){
		sum += abs(a[i]-(pow(ele,i)));
	}

	return sum;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	//cin>>t; while(t--){

	
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	sort(a,a+n);

	

	// int temp = exp(log(a[n-1])/(n -1));
	// int temp2 = exp(log(a[n/2])/((n/2)));
	// int cost = min(solve(a,temp-1),min(solve(a,temp),solve(a,temp+1)));
	// int cost2 = min(solve(a,temp2-1),min(solve(a,temp2),solve(a,temp2+1)));

	// // cout<<temp<<" ";
	// cout<<min(cost,cost2)<<"\n";

	int temp = INT_MAX;
	int diff = INT_MAX;
	for(int i=1;i<n;i++){

		int num = exp(log(a[i])/(i+1));
		if(abs(a[n-1]-num)<diff){
			diff = abs(a[n-1]-num);
			temp = num;
		}
	}

	// cout<<temp<<" ";
	int cost = min(solve(a,temp-1),min(solve(a,temp),solve(a,temp+1)));
	cout<<cost<<"\n";

	//}

}
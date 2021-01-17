#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int func(int n){

	if(n==0){
		return 0;
	}
	int curr = 0;
	int count = 0;

	for(int i=1;;i++){
		curr += i;
		count++;

		if(curr>=n){
			break;
		}
	}

	return count;
}

bool isPossible(int *a,int i,int n,int m){

	int sum = 0,count = INT_MAX;
	for(int j=0;j<n;j++){
		sum += max(0LL, a[j] - (j/i));
	}

	if(sum>=m){
		return true;
	}else{
		return false;
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n,m;
	cin>>n>>m;

	int a[n];
	int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		sum += a[i];
	}

	if(sum<m){
		cout<<-1;
		return 0;
	}

	int rem = func(sum-m),total = 0;
	if(rem*(rem+1)/2 >= (sum-m)){
		rem--;
	}
	// cout<<rem<<" ";
	int count = 0;
	int i = 0;

	sort(a,a+n);
	reverse(a,a+n);

	// while(i<n){
	// 	total += a[i];
	// 	i++;
	// 	int temp = 1;
	// 	while(a[i]-temp>0 && rem){

	// 		total += (a[i]-temp);
	// 		temp++;
	// 		rem--;
	// 		i++;
	// 	}
	// 	count++;
	// 	// cout<<total<<" ";
	// 	if(total>=m){
	// 		break;
	// 	}

	// }	

	int l = 1,r = n;

	while(l<r){

		int mid = (l+r)/2;

		if(isPossible(a,mid,n,m)){
			r = mid;
		}else{
			l = mid+1;
		}
	}

	cout<<l<<"\n";



}
#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve(int* a,int n){

	int max_so_far = INT_MIN;
	int max_ending_here = 1;
	int min_ending_here = 1;
	bool flag = 0;


	for (int i = 0; i < n; ++i)
	{
		if(a[i]>0){
			max_ending_here = max_ending_here*a[i];
			min_ending_here = min(1,min_ending_here*a[i]);
			flag = 1;
		}else if(a[i]==0){
			max_ending_here = 0;
			min_ending_here = 1;
		}else{
			int temp = max_ending_here;
			max_ending_here = max(1,min_ending_here*a[i]);
			min_ending_here = min(1,temp*a[i]);
		}

		if(max_ending_here>max_so_far){
			max_so_far = max_ending_here;
		}

		if(max_ending_here==0){
			max_ending_here = 1;
		}
	}

	if(flag == 0 && max_so_far == 1){
		cout<<"0\n";
		return;
	}

	cout<<max_so_far<<"\n";
	return;
}



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
	for(int i=0;i<n;i++){
		cin>>a[i];
	}


	solve(a,n);

	//}
}


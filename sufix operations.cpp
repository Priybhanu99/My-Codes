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
	cin>>t; while(t--){

		int n;
		cin>>n;

		int a[n];

		int mean = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mean+= a[i];
		}

		mean/=n;

		int index = 0;

		int diff = INT_MIN;
		for (int i = 0; i < n; ++i)
		{
			if((abs(a[i]-mean))>diff){
				diff = abs(a[i]-mean);
				index = i;
			}
		}


		cout<<"value:"<<mean<<" index:"<<index<<" ";
		a[index] = mean;


		// vector<int> prefix(n+1);
		// prefix[0] = 0;

		// for (int i = 1; i < n+1; ++i)
		// {
		// 	prefix[i] = prefix[i-1] + a[i-1];
		// }

		// cout<<"prefix array: ";
		// for(auto i:prefix){
		// 	cout<<i<<" ";
		// }
		// cout<<"\n";

		// int cost = INT_MIN;
		// index = 0;

		// cout<<"cost :";

		// for (int i = 0; i < n; ++i)
		// {
		// 	int temp = (a[i]*(n-i-1)) - (prefix[n] - prefix[i+1]);
		// 	cout<<temp<<" ";
		// 	if(abs(temp)>cost){
		// 		cost = abs(temp);
		// 		index = i;
		// 	}
		// }

		// cout<<"\n";
		// cout<<cost<<" index:"<<index<<" ";
		// if(index==0){
		// 	a[0] = a[1];
		// }else{
		// 	a[index] = a[index+1];
		// }
		// int gap = INT_MIN;

		// for (int i = 0; i < n; ++i)
		// {
		// 	if
		// }


		// int mxm = INT_MIN;
		// int mxm_index = 0;
		// for (int i = 0; i < n;i++){
		// 	if(a[i]>mxm){
		// 		mxm = a[i];
		// 		mxm_index = i;
		// 	}
		// }		

		// int mnm = INT_MAX;
		// int mnm_index = 0;

		// for (int i = 0; i < n; ++i)
		// {
		// 	if(mnm>a[i]){
		// 		mnm = a[i];
		// 		mnm_index = i;
		// 	}
		// }


		// int x = a[mnm_index];
		// a[mnm_index] = a[max(0LL,mnm_index-1)];


		// int ans1 = 0;
		// int carry1 = 0;
		// for (int i = 1; i < n; ++i)
		// {
		// 	a[i] += carry1;

		// 	int temp = a[i]-a[i-1];
		// 	ans1 += abs(temp);

		// 	if(a[i]>a[i-1]){
		// 		carry1 -= temp;
		// 	}else{
		// 		carry1 += temp;
		// 	}

		// 	a[i] = a[i-1];
		// }

		// a[mnm_index] = x;

		// if(mxm_index==n-1){
		// 	a[mxm_index] = a[mxm_index-1];
		// }else{
		// 	a[mxm_index] = a[mxm_index+1];
		// }

		int ans2= 0,carry2 =0;


		for (int i = 1; i < n; ++i)
		{
			a[i] += carry2;

			int temp = a[i]-a[i-1];
			ans2 += abs(temp);

			if(a[i]>a[i-1]){
				carry2 -= temp;
			}else{
				carry2 += temp;
			}

			a[i] = a[i-1];
		}


		cout<<ans2<<"\n";



	}

}

// 0
// 1
// 3
// 4
// 6
// 5
// 2847372102

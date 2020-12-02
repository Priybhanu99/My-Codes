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

		int sum  = 0;

		vector<int> x,y;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum += a[i];
		}

		if(sum==0){cout<<"NO\n";continue;}

		// vector<int> x,y;

		sum  = 0;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]<0){
				x.push_back(a[i]);
			}else{
				y.push_back(a[i]);
				sum += a[i];
			}
		}


		cout<<"YES\n";

		// sum = 0;
		int count = 0;

		for (int i = 0; i < y.size(); ++i)
		{
			cout<<y[i]<<" ";
		}

		// sort(x.begin(), x.end());

		// int temp = sum;
		// bool flag = true;
		// for (int i = 0; i < x.size(); ++i)
		// {
		// 	sum += x[i];
		// 	if(sum==0){
		// 		flag = false;
		// 		break;
		// 	}
		// }

		// if(flag){
		// 	for(auto i:x){
		// 		cout<<i<<" ";
		// 	}
		// }else{
		// 	reverse(x.begin(), x.end());
		// 	for(auto i:x){
		// 		cout<<i<<" ";
		// 	}
		// }

		sum = 0;
		int index_x = 0,index_y = 0;
		for(int i=0;i<n;i++){

			cout<<y[index_y]<<" ";
			sum += y[index_y++];

			if(x_index!=x.size() && sum+x[index_x]==0){
				cout<<y[index_y]<<" ";
				sum += y[index_y++];
			}else{
				cout<<x[index_x]<<" ";
				sum += x[index_x++];
			}
		}

		cout<<"\n";


	}

}


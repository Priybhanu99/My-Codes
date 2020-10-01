#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	cin>>t; while(t--){

		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}


		// if(n==1){
		// 	if(a[i]==1){
		// 		cout<<
		// 	}
		// // }
		// int sum[n];
		// for (int i = 0; i < n; ++i)
		// {
		// 	sum[i] = ((i+1)*(i+2))/2;
		// }
		// // cout<<"sum: \n";
		// // for (int i = 0; i < n; ++i)
		// // {
		// // 	cout<<sum[i]<<" ";
		// // }

		// int prefix[n] = {};
		// prefix[0] = a[0];
		// for (int i = 1; i < n; ++i)
		// {
		// 	prefix[i] = a[i] + prefix[i-1];
		// }
		// // cout<<"prefix: \n";
		// // for (int i = 0; i < n; ++i){ cout<<prefix[i]<<" ";}


		// vector<int> one,two;

		// for (int i = 0; i < n-1; ++i)
		// {
		// 	if(sum[i]==prefix[i] && (prefix[n-1]-prefix[i] == sum[n-i-2])){
		// 		one.push_back(i+1);
		// 		two.push_back(n-i-1);
		// 	}
		// }

		// cout<<one.size()<<"\n";
		// for (int i = 0; i < one.size(); ++i)
		// {
		// 	cout<<one[i]<<" "<<two[i]<<"\n";
		// }

		int mxm = 0;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]>mxm){
				mxm = a[i];
			}
		}

		// int mxm = 0;
		// for (int i = 0; i < n; ++i){
		// 	if(a[i]==mxm){
		// 		mxm = i;
		// 		break;
		// 	}
		// }

		int b[n+1] = {};
		for(int i=0;i<mxm;i++){
			b[a[i]]++;
		}

		bool flag1 = true;
		for (int i = 1; i <= mxm; ++i)
		{
			if(!b[i]){
				flag1 = false;
				break;
			}
		}

		memset(b,0,sizeof(b));
		for(int i=0;i<n-mxm;i++){
			b[a[i]]++;
		}

		bool flag2 = true;
		for (int i = 1; i <= n-mxm; ++i)
		{
			if(!b[i]){
				flag2 = false;
				break;
			}
		}

		if(flag1&&flag2){
			cout<<"2\n";
			cout<<mxm<<" "<<n-mxm<<"\n";
			cout<<n-mxm<<" "<<mxm<<"\n";
			continue;
		}

		if(flag1==true){
			cout<<"1\n";
			cout<<mxm<<" "<<n-mxm<<"\n";
		}else if(flag2==true){
			cout<<"1\n";
			cout<<n-mxm<<" "<<mxm<<"\n";
		}else{
			cout<<"0\n";
		}







	}
}


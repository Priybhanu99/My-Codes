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
		vector<int> one,two;
		for (int i = 0; i < n/2; ++i)
		{
			int num;
			cin>>num;
			one.push_back(num);
		}
		for(int i = n/2;i<n;i++){
			int num;
			cin>>num;
			two.push_back(num);
		}

		int max1 = INT_MIN;
		int max2 = INT_MIN;
		for (int i = 0; i < n/2; ++i)
		{
			max1 = max(max1,one[i]);
		}

		for (int i = 0; i < n/2; ++i)
		{
			max2 = max(max2,two[i]);
		}

		int index1 = 0;
		int index2 = 0;
		int mini = -1;

		for (int i = 0; i < n/2; ++i)
		{
			if(one[i]==max1){
				index1 = i;
				if(mini == -1) mini = i;
			}
		}

		for (int i = 0; i < n/2; ++i)
		{
			if(two[i]==max2){
				index2 = (n/2)+i;
			}
		}

		 // cout<<max1<<" "<<max2<<"\n";

		 // cout<<index1<<" "<<index2<<"\n";

		int ans=0;
		if(max1>max2){
			ans = n-(index1+1);
			//cout<<"hi1";
		}else if(max2>max1){
			ans = n - index2 - 1;
			//cout<<"hi2";
		}else{
			//cout<<"hi3";
			if(one==two){
				ans = 0;
			}else{
				if(index2==n-1){
					ans = 0;
				}else{
					int x = index2 - mini;
					if(x>=(n/2)){
						ans = 0;
					}else{
						if((mini + n-index2-1) >n/2){
							ans = n - index2-1;
						}
					}
				}
			}
		}

		cout<<ans<<"\n";
	}
}


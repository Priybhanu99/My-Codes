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


	int nums[33]={};
	for (int i = 0; i < 10; ++i)
	{
		int num;
		cin>>num;
		nums[num]++;
	}


	int t;
	cin>>t; while(t--){

		int count = 0;
		for (int i = 0; i < 6; ++i)
		{
			int num;
			cin>>num;

			if(nums[num]!=0)
			{
				count++;
			}
		}

		if(count>=3){
			cout<<"Lucky\n";
		}else{
			cout<<"Unlucky\n";
		}

	}
}

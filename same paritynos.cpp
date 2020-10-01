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

	int t;
	cin>>t; while(t--){

		int n,k;
		cin>>n>>k;
		
		int mod = n%k;
		
		int sum1 = 0;
		int sum2 = 0;

		sum1 = k-1;//1
		sum2 = 2*(k-1);

		int rem1 = n-sum1;
		int rem2 = n - sum2;

		bool one=true;
		bool two = true;
		if(rem1%2==1 && rem1>0){
			cout<<"YES\n";
			for (int i = 0; i < k-1; ++i)
			{
				cout<<"1 ";
			}
			cout<<rem1<<"\n";
		}else if(rem2%2==0 && rem2>0){
			cout<<"YES\n";
			for (int i = 0; i < k-1; ++i)
			{
				cout<<"2 ";
			}
			cout<<rem2<<"\n";
		}else{
			cout<<"NO\n";
		}

		


	}
}


// YES
// 4 2 4
// YES
// 55 5 5 35
// NO
// NO
// YES
// 1 1 1 1 1 1 1 1
// NO
// YES
// 3 1 1
// YES
// 111111110 111111110 111111110 111111110 111111110 111111110 111111110 111111110 111111120

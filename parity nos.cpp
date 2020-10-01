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
		
		int sum = 0;

		if(mod%2==0){

			for (int i = 0; i < k-1; ++i)
			{
				sum += 1;
			}

			if((n-sum)%2==0 || (n-sum)<=0){
				cout<<"NO\n";
			}else{
				cout<<"YES\n";
				for (int i = 0; i < k-1; ++i)
				{
					cout<<1<<" ";
				}
				cout<<n-sum<<"\n";
			}
		}else{
			for (int i = 0; i < k-1; ++i)
			{
				sum += 2;
			}

			if((n-sum)%2!=0 || (n-sum)<=0){
				cout<<"NO\n";
			}else{
				cout<<"YES\n";
				for (int i = 0; i < k-1; ++i)
				{
					cout<<2<<" ";
				}
				cout<<n-sum<<"\n";
			}
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

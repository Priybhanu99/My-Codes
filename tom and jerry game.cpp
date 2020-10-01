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

		int n;
		cin>>n;

		if(n%2==1){
			cout<<n/2<<"\n";
			continue;
		}
		
		int count = 0;
		int temp = n;

		while(temp%2==0){
			temp = temp/2;
			count++;
		}

		cout<<n/(int)pow(2,count+1)<<"\n";
//n = 6 -> 4 = 1
//n = 10 -> 4 8 = 2;
//n = 14 -> 4 8 12 = 3
//n = 18 -> 4 8 12 16 = 4 


	}
}

// 0
// 0
// 1
// 0
// 2
// 1
// 3
// 0
// 4
// 2
// 5
// 1
// 6
// 3
// 7
// 0
// 8
// 4
// 9
// 2

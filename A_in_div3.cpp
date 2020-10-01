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

	int n,sum=0;
	cin>>n;
	int temp = n;
	while(temp!=0){
		sum += (temp%10);
		temp /= 10;
	}
	cout<<sum<<endl;
	// int rem = (n/4)*4;

	// if(n-rem==0){
	// 	cout<<n;
	// }else{
	// 	cout<<n+(n-rem);
	// }
	if(sum%4==0){
		cout<<n;
	}else{
		int rem = (sum/4)*4 + 4;
		cout<<rem<<endl;
		cout<<n+(rem-sum);
	}
}


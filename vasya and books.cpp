#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int fun(int n){

	int count = 0;

	while(n){
		count++;
		n/=10;
	}

	return count;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	//cin>>t; while(t--){

	int n;
	cin>>n;

	// 1->9(1)
	// 10->99(2)
	// 100->999(3)
	// 1000->9999(4)

	int no_of_digits = fun(n);

	int ans = 0;

	while(no_of_digits){
		ans += ((n-(pow(10,no_of_digits-1))+1)*no_of_digits);
		n = pow(10,no_of_digits-1)-1;
		no_of_digits--;
	}

	cout<<ans<<"\n";
	//}

}
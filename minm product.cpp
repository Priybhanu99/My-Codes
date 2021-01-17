#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second


int func(int a,int b,int x,int y,int n){


	int temp = a;
	a = max(x,a-n);
	n -= abs(temp-a);

	b = max(y,b-n);
 
	return a * b; 
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;

		int ans1 ,ans2;

		// int tempn = n;

		// int tempx = a,tempy = b;
		// if(a<b){
			
		// }else{
		// 	int temp = b;
		// 	b = max(y,b-n);
		// 	n -= abs(temp-b);

		// 	a = max(x,a-n);
		// }

		// ans1 = a*b;

		// a = tempx;
		// b = tempy;

		// n = tempn;

		// if(a>b){
		// 	int temp = a;
		// 	a = max(x,a-n);
		// 	n -= abs(temp-a);

		// 	b = max(y,b-n);
		// }else{
		// 	int temp = b;
		// 	b = max(y,b-n);
		// 	n -= abs(temp-b);

		// 	a = max(x,a-n);
		// }

		// ans2 = a*b;


		ans1 = func(a,b,x,y,n);
		ans2 = func(b,a,y,x,n);


		cout<<min(ans1,ans2)<<"\n";

	}

}

// 70
// 77
// 177177
// 999999999000000000
// 999999999
// 55
// 10

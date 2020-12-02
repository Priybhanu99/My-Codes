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

	// vector<int> a;
	// a.pb(4);


	// for (int i = 2; i < 100; ++i)
	// {

	// 	int num = 2*i;
	// 	if(num%4!=0){
	// 		a.pb(num);
	// 	}
	// }

	// for (int i = 0; i < a.size(); ++i)
	// {
	// 	cout<<a[i]<<" ";
	// }
	cin>>t; while(t--){

		int n;
		cin>>n;

		int temp = 4*n;
		for (int i = 4*n - n + 1; i<=4*n; i++)
		{
			cout<<temp<<" ";
			temp -= 2;
		}

		cout<<"\n";
	}

}
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
	//cin>>t; while(t--){

	int n;
	cin>>n;

	if(n%2==0){
		int temp = n/2 + 1;
		cout<<temp*temp;
	}else{
		 cout<<(1+((3*n*(n+4)+2-(-1)*(n*(n+4)+2)))/8);
	}

	//}

}
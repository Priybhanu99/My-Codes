#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 100;
int fib[N];

void fibonacci(){

	fib[1] = 1;
	fib[2] = 1;
	for(int i=3;i<N;i++){
		fib[i] = fib[i-1]+fib[i-2];
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	//cin>>t; while(t--){

	cin>>n;
	fibonacci();
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		cout<<"#"<<i+1<<" : "<<fib[a[i]+2]<<endl;
	}

	//}
}


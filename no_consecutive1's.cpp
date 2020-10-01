#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 100;
int a[N],b[N];

void countnoofbs(){
	a[1] = 1;
	b[1] = 1;
	for(int i=2;i<N;i++){
		a[i] = a[i-1]+b[i-1];
		b[i] = a[i-1];
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
	countnoofbs();
	cin>>t; while(t--){

		cin>>n;
		cout<<a[n]+b[n]<<endl;
	}
}


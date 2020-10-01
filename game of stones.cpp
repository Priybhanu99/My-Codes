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

	int a[1000]={};
	a[1]=0;
	a[2]=a[3]=a[5]=1;
	for (int i = 4; i < 1000; ++i)
	{
		if(a[i]==1){
			continue;
		}
		if(a[i-2]*a[i-3]*a[i-5]==0){
			a[i] = 1;
		}else{
			a[i] = 0;
		}
	}
	cin>>t; while(t--){

		int n;
		cin>>n;

		if(a[n]==1){
			cout<<"First"<<endl;
		}else{
			cout<<"Second"<<endl;
		}
	}

	// for (int i = 1; i <= 10; ++i)
	// {
	// 	cout<<a[i]<<endl;
	// }
}


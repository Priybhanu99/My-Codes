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

	int a,b,n;
	cin>>a>>b>>n;

	bool flag = true;

	int count = 0;
	
	for(int x = 0;x<=9;x++){
		
		int temp = a*10 + x;
		if(temp%b==0){
			a = temp;
			flag = false;
			break;
		}
	}

	if(flag){
		cout<<"-1\n";
	}else{
		cout<<a;
		for(int i=0;i<n-1;i++){
			cout<<"0";
		}
		cout<<"\n";
	}
	



	// cout<<a<<"\n";

	//}

}
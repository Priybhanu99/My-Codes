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

	int odd,even;
	int counto = 0,counte = 0;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2){
			counto++;
			odd = i+1;
		}else{

			counte++;
			even = i+1;
		}
	}

	if(counto==1){
		cout<<odd<<"\n";
	}else{
		cout<<even<<"\n";
	}

	//}

}
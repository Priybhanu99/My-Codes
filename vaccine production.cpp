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
	//  #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	//  #endif

	int t;
	//cin>>t; while(t--){

	int x1,y1,x2,y2,p;
	cin>>x1>>y1>>x2>>y2>>p;

	int count = 0;
	int sum = 0;

	int curr = 1;

	while(sum<p){
		if(x1<=curr){
			sum += y1;
		}

		if(x2<=curr){
			sum += y2;
		}

		curr++;
		count++;
	}

	cout<<count<<"\n";

	//}

}
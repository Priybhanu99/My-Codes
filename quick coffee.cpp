#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

bool count( vector<int> S, int m, int n ) 
{ 

	if (n == 0) 
		return 1; 


	if (n < 0) 
		return 0; 


	if (m <=0 && n >= 1) 
		return 0; 

	return count( S, m - 1, n ) || count( S, m, n-S[m-1] ); 
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int a,d;
	cin>>a>>d;

	// d = d%a;
	// cout<<d<<" ";

	if(d==0){
		cout<<a<<"\n";
		return 0;
	}

	// if(d<a){
	// d = (d/a)*a;
	d = d-a;
	// }

	// cout<<d<<" ";

	int x = 0;
	vector<int> temp;
	while(1){
		temp.push_back(a+x);
		x++;

		if(count(temp,temp.size(),d)){
			cout<<temp.back()<<"\n";
			return 0;
		}

	}





}
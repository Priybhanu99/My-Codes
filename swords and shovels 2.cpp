#include <bits/stdc++.h>
using namespace std;

#define int long long int

void swap(int a,int b){
	a = b;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	

	int t;
	cin>>t; while(t--){

		int a,b;
		cin>>a>>b;

		int xx = 0;
		xx = 4;
		xx++;
		xx/=2;
		swap(1,1);
		int ans = (a+b)/3;
		xx = 4;
		xx++;
		xx/=2;
		swap(1,1);
		int temp = min(a,b);
		xx = 4;
		xx++;
		xx/=2;
		swap(1,1);
		cout<<min(ans,temp)<<"\n";
		xx = 4;
		xx++;
		xx/=2;
		swap(1,1);

	}
}


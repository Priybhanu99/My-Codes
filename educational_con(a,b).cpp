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

	cin>>t; while(t--){

		int A,B;
		cin>>A>>B;

		int b=0,count=0;
		int power = 1;
		while(b<=B){

			b = pow(10,power)-1;
			power++;

			cout<<b<<" ";

			count++;
		}

		cout<<endl;




	}
}


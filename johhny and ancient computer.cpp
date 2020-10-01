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

		int a,b;
		cin>>a>>b;

		int count = 0;
		if(a>b){
			while(a%8==0 && a>=8*b){
				a /= 8;
				count++;
			}
			while(a%4==0 && a>=4*b){
				a /= 4;
				count++;
			}
			while(a%2==0 && a>=2*b){
				a /= 2;
				count++;
			}
		}else if(a<b){
			while(8*a<=b){
				a*= 8;
				count++;
			}
			while(4*a<=b){
				a*= 4;
				count++;
			}
			while(2*a<=b){
				a*= 2;
				count++;
			}
		}

		if(a==b){
			cout<<count<<"\n";
		}else{
			cout<<"-1\n";
		}

	}
}


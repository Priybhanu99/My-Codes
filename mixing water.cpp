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

		int hot,cold,temp;
		cin>>hot>>cold>>temp;

		double ans = hot;
		int count = 1;


		while(){
			if(ans<temp){
				ans = (ans+hot)/2*1.0000;
				count++;
			}else if(ans>temp){
				ans = (ans+cold)/2*1.0000;
				count++;
			}else{
				break;
			}
		}

		cout<<count<<"\n";



	}
}


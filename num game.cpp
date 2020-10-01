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

	int t,n;
	cin>>t; while(t--){

		cin>>n;
		
		if(n==1){
			cout<<"FastestFinger\n";
			continue;
		}

		if(n==2 || n%2==1){
			cout<<"Ashishgup\n";
			continue;
		}

		int count = 0;
		int temp = n;

		for(int i=3;i*i<=n;i+=2){

			while(n%i==0 && i&1){
				count++;
				n /= i;
			}
		}

		// if(n&1){
		// 	count++;
		// }
		// cout<<count<<" ";
		int turn = 1;
		if(count%2==0){
			turn = 1;
		}else{
			turn = 0;
		}

		int x = n-1;
		// cout<<x<<" ";
		if(x>1){
			if(turn==0){
				if(x%2==0){
					cout<<"FastestFinger\n";
				}else{
					cout<<"Ashishgup\n";
				}
			}else{
				if(x%2==0){
					cout<<"Ashishgup\n";
				}else{
					cout<<"FastestFinger\n";
				}
			}
		}else{
			if(x==1){
				if(turn == 1){
					cout<<"Ashishgup\n";
				}else{
					cout<<"FastestFinger\n";
				}
			}else{
				if(turn == 0){
					cout<<"Ashishgup\n";
				}else{
					cout<<"FastestFinger\n";
				}
			}
		}

	}
}

																	/*FastestFinger
																	Ashishgup
																	Ashishgup
																	FastestFinger
																	Ashishgup
																	FastestFinger
																	Ashishgup
																	FastestFinger
																	Ashishgup
																	FastestFinger
																	Ashishgup
																	Ashishgup
																	Ashishgup
																	FastestFinger
																	Ashishgup
																	FastestFinger
																	Ashishgup
																	FastestFinger
																	Ashishgup
																	FastestFinger
																	Ashishgup
																	FastestFinger
																	Ashishgup
																	Ashishgup
																	Ashishgup
																	FastestFinger
																	Ashishgup
																	FastestFinger
																	Ashishgup
																	Ashishgup
																	Ashishgup
																	FastestFinger
																	Ashishgup
																	FastestFinger
																	Ashishgup */
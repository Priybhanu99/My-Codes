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


		//EASY VERSION

		// while(true){

		// 	bool flag = true;
		// 	int temp = n;

		// 	while(temp>0){
		// 		if(flag == true && temp%3== 2){
		// 			flag = false;
		// 		}

		// 		temp /= 3;
		// 	}

		// 	if(flag==false){
		// 		++n;
		// 	}else{
		// 		break;
		// 	}

		// }

		// cout<<n<<"\n";

		int num = 0;
		int mult = 1;

		while(n>num){

			int rem = n/mult;
			if(rem>1){
				while(rem--){
					num += 3*mult;
				}
			}else{
				num += (n%mult)*mult;
			}
			mult *= 3;
		}

		cout<<num<<"\n";
	}
}


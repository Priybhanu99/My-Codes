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

		int n,d;
		cin>>n>>d;

		if(n>=d){
			cout<<"YES\n";
			continue;
		}

		// int x = (n)/2;

		// bool flag = true;
		// while(flag){
		// 	int num  = x + ceil(d/x+1);
		// 	if(num<=n){
		// 		cout<<x<<" ";
		// 		cout<<"YES\n";
		// 		break;
		// 	}else{
		// 		flag = false;
		// 	}
		// 	x++;
		// }

		int x = 1;
		bool flag = false;
		while(x<1000000){
			int temp = d/(x+1);//5
			int temp2 = temp*(x+1);//10

			if(temp2<d){
				temp++;
			}

			
			int num = x + temp;
			// cout<<num<<",";
			if(num<=n){
				flag = true;
				break;
			}

			// if(num>n){
			// 	break;
			// }

			x++;

		}

		// cout<<x<<" ";

		if(flag){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

		


	}
}



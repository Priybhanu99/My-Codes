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
	cin>>t; while(t--){

		int n;
		cin>>n;

		int num;
		cin>>num;


		int flag = 0;
		int index = n;

		int no = num;

		int odd_at_odd = 0;
		int odd_at_even = 0;

		while(index>0){
			// cout<<num<<" ";
			int rem = num%10;
			// cout<<rem<<" \n";
			if(index%2==0 && rem%2==1){
				odd_at_even++;
			}

			if(index%2==1 && rem%2==1){
				odd_at_odd ++;
			}

			num /= 10;
			index--;
		}

		
		cout<<odd_at_even<<" "<<odd_at_odd<<"\n";

		if(n%2==0){
			if(odd_at_even>0){
				cout<<"1";
			}else{
				cout<<"2";
			}
		}else{
			if(odd_at_odd>0 && odd_at_odd>=(n/2-2)){
				cout<<"1";
			}else{

				cout<<"2";
			}
		}
		cout<<"\n";

	}

}
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
	//cin>>t; while(t--){

	int n;
	cin>>n;

	int row = 2*n+1;
	int spaces = 2*n;

	int temp = 1;
	while(row--){
		//spaces
		for (int i = 0; i < spaces; ++i)
		{
			cout<<" ";
		}


		//numbers
		for (int i = 0; i < temp; ++i)
		{
			// cout<<" "<<i;
			if(temp==1 && i==temp-1){
				cout<<i;
			}else{
				cout<<i<<" ";

			}
		}

		for(int i = temp-2;i>=0;i--){
			// cout<<" "<<i;
			if(i==0){
				cout<<i;
			}else{
				cout<<i<<" ";
			}
		}

		if(row>n){
			spaces-=2;
			temp++;
		}else{
			spaces+=2;
			temp--;
		}

		cout<<"\n";
	}

	//}

}
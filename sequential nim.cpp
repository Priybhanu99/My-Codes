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

		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}

		int arr[n] = {};
		for(int i=n-2;i>=0;i--){
			if(a[i]==1){
				arr[i] = arr[i-1] + 1;
			}else{
				arr[i] = 0;
			}
		}

		int turn = 1;

		for (int i = 0; i < n-1; ++i)
		{

			if(a[i]==1){
				if(turn == 1){
					turn = 2;
				}else{
					turn = 1;
				}
			}else{
				if(arr[i+1]%2==0){
					if(turn == 1){
						turn = 2;
					}else{
						turn = 1;
					}
				}
			}
		}
		if(turn==1){
			cout<<"First\n";
		}else{
			cout<<"Second\n";
		}
	}

}

// First
// Second
// Second
// First
// First
// Second
// First

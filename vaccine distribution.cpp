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
	//  #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	//  #endif

	int t;
	cin>>t; while(t--){

		int n,d;
		cin>>n>>d;

		int a = 0,b = 0;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;

			if(num>=80 || num<=9){
				a++;
			}else{
				b++;
			}
		}

		int count = a/d;
		if(a%d != 0){
			count++;
		}

		int count1 = b/d;
		if(b%d != 0){
			count1++;
		}

		cout<<count+count1<<"\n";

	}

}
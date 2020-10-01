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

		int n;
		cin>>n;

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		if(n<=4){

			if(n==1){
				if(a[0]==1){
					cout<<"YES\n";
				}else{
					cout<<"NO\n";
				}
			}else if(n==2){
				if(a[0]==1 && (a[1]==1 || a[1]==2)){
					cout<<"YES\n";
				}else{
					cout<<"NO\n";
				}
			}else if(n==3){

				if(a[0]==1 && (a[1]==1 || a[1]==2) && (a[2]==1 || a[2]==3)){
					cout<<"YES\n";
				}else{
					cout<<"NO\n";
				}
			}else{

				if(a[0]==1 && (a[1]==1 || a[1]==2) && (a[2]==1 || a[2]==3) && (a[3]==1 || a[3]==2 || a[3]==4)){
					cout<<"YES\n";
				}else{
					cout<<"NO\n";
				}
			}
			continue;
		}

		bool flag = true;

		for (int i = 0; i < n; ++i)
		{
			
			if(a[i]==1 || a[i]==(i+1)){
				continue;
			}

			if((i+1)%a[i]!=0 || a[a[i]-1]!=a[i] || a[i]>(i+1)){
				flag = false;
			}
			// cout<<i<<" ";

		}

		if(flag){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

	}

}
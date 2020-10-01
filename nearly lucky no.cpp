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
	//cin>>t; while(t--){

	cin>>n;
	int count =0;
	while(n){
		if(n%10==4 || n%10==7){
			count++;
		}
		n/=10;
	}

	bool flag = true;
	if(count==0){
		cout<<"NO\n";
		return 0;
	}
	while(count){
		if(count%10==4 || count%10==7){
			count /=10;
			
		}else{
			flag = false;
			break;
		}
		
	}

	if(flag){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}

	//}
}


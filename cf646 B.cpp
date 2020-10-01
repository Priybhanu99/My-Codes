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

		string s;
		cin>>s;

		if(s.size()<=2){
			cout<<"0\n";
			continue;
		}
		
		int count = 0;

		
		for(int i=1;i<s.size()-1;i++){
			if(s[i]=='1'){
				count++;
			}
		}

		// if(s[0]=='1'){
		// 	if(count>0){
		// 		count++;
		// 	}else{

		// 	}
		// }

		// if(s[0]=='1' && s[s.size()-1]=='1'){
		// 	count++;
		// }

		int x = 0;
		if(s[0]=='1'){
			x++;
		}
		if(s[s.size()-1]=='1'){
			x++;
		}

		if(x==2){
			count++;
		}

		cout<<count<<"\n";






	}
}

// 0
// 0
// 1
// 1
// 0
// 0
// 2



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


	int a,b;
	cin>>a>>b;

	int x;
	cin>>x;


	string s;
	int count = 0;
	
	while(x>0){
		if(x%2==1){
			s+='1';
			b--;
		}else{
			s+='0';
			a -= 1;
		}
		x--;
	}

	// cout<<s<<" ";
	if(s[s.size()-1]=='0'){
		while(b>0){
			s+='1';
			b--;
		}
		while(a>0){
			s+='0';
			a--;
		}
		
	}else{
		
		while(a>0){
			s+='0';
			a--;
		}
		while(b>0){
			s+='1';
			b--;
		}
	}



	cout<<s;


	//}
}


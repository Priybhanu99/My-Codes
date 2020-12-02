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

	string s;
	cin>>s;

	bool flag = true;
	int index = -1;

	for(int i=0;i<s.size();i++){
		if(s[i]=='0'){
			index = i;
			flag = false;
			break;
		}
	}

	if(s.size()==1){

		cout<<"0\n";
		return 0;
	}

	if(flag){		
		cout<<s.substr(1)<<"\n";		
	}else{
		cout<<s.substr(0,index) + s.substr(index+1)<<"\n";
	}


}
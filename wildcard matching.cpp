#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool check_code(string str,string pattern){

	if(str.size()==0 && pattern.size()!=0){
		return 0;
	}
	if(str.size()==0&&pattern.size()==0){
		return 1;
	}

	char ch = str[0];
	if(ch=='?'){
		return check_code(str.substr(1),pattern.substr(1));
	}else if(ch == '*'){

		for (int i = 0; i < pattern.size(); ++i)
		{
			bool flag = check_code(str.substr(1),pattern.substr(i));
			if(flag==1){
				return 1;
			}
		}
		return 0;
	}else{
		if(ch == pattern[0]){
			return check_code(str.substr(1),pattern.substr(1));
		}else{
			return 0;
		}
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	string str,pattern;
	cin>>str>>pattern;

	bool ans = check_code(pattern,str);
	if(ans){
		cout<<"MATCHED";
	}else{
		cout<<"NOT MATCHED";
	}
}


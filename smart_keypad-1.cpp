#include <bits/stdc++.h>
using namespace std;

string codes[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

vector<string> keypad(string str){

	if(str.length()==0){
		vector<string> base;
		base.push_back("");
		return base;
	}

	vector<string> ans;
	char ch = str[0];
	string code = codes[ch-'0'];
	for (int i = 0; i < code.length(); ++i)
	{
		for(auto s:keypad(str.substr(1))){
			ans.push_back(code[i]+s);
		}
	}

	return ans;
	

}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	  #endif
	
	string str;
	cin>>str;
	
	keypad(str);
}


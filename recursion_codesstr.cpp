#include <bits/stdc++.h>
using namespace std;

#define int long long int

char get_codes(string s){

	int a = 96+stoi(s);
	cout<<char(a)<<endl;
	return char(a);

}

vector<string> recursion_codes(string s){
	if(s.length()==0){
		vector<string> base;
		base.push_back("");
		return base;
	}

	// int a = stoi(str.substr(0,1));
	// int b = stoi(str.substr(0,2));

	string a = s.substr(0,1);
	char ch1 = get_codes(a);

	vector<string> ans;

	vector<string> x = recursion_codes(s.substr(1));
	for(auto value:x){
		ans.push_back(ch1+value);
	}

	if(s.size()>=2){
		string b = s.substr(0,2);
		char ch2 = get_codes(b);
		if(stoi(b)<=26){
		vector<string> y = recursion_codes(s.substr(2));
		for(auto value:y){
			ans.push_back(ch2+value);
		}
	}
	}
	

	return ans;

}


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	string str;
	cin>>str;

	vector<string> ans = recursion_codes(str);

	cout<<"[";
	cout<<ans[0];
	for (int i = 1; i < ans.size(); ++i)
	{
		cout<<", "<<ans[i];
	}
	cout<<"]";





	//}
}


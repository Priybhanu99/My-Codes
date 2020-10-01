#include <bits/stdc++.h>
using namespace std;

#define int long long int

string searchIn [] = {
	"prateek", "sneha", "deepak", "arnav", "shikha", "palak",
	"utkarsh", "divyam", "vidhi", "sparsh", "akku"
};

void check(vector<string> a){
	for(auto i:a){
		for(auto j:searchIn){
			for(int k=0;k<j.size();k++){
				string s = j.substr(k,i.size());
				if(i.compare(s)==0){
					cout<<j<<endl;
					continue;
				}
			}
		}
	}
}

vector<char> getcode(int n){
	string codes[] = {"abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};
	vector<char> a;
	for(int i=0;i<codes[n-2].size();i++){
		a.push_back(codes[n-2][i]);
	}
	return a;
}

vector<string> solve(string s){
	if(s.size()==0){
		vector<string> base;
		base.push_back("");
		return base;
	}

	char ch = s[0];
	vector<char> a = getcode(ch-'0');
	vector<string> b = solve(s.substr(1));
	vector<string> ans;
	for(auto i:a){
		for(auto j:b){
			ans.push_back(i+j);
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

	vector<string> ans = solve(str);
	check(ans);

	



}


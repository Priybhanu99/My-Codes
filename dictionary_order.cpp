#include <bits/stdc++.h>
using namespace std;

vector<string> find_permutations(string s){

	if(s.length()==1){
		vector<string> base;
		base.push_back(s);
		//cout<<"bc";
		return base;
	}

	char ch = s[0];
	vector<string> subans = find_permutations(s.substr(1));//ab,ba
	// for(auto t:subans) cout<<t<<" ";
	vector<string> ans;
	for(auto res:subans){
		for(int i=0;i<=res.length();i++){
			ans.push_back(res.substr(0,i)+ch+res.substr(i));
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

	vector<string> ans1 = find_permutations(str);
	sort(ans1.begin(), ans1.end());
	for(auto a:ans1){
		 if(a>str){
			cout<<a<<endl;
		}
	}
	return 0;
}


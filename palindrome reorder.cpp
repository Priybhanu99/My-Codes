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

	int t;
	//cin>>t; while(t--){

	string s;
	cin>>s;

	if(s.size()==1){
		cout<<s;
		return 0;
	}
	map<char,int> map;
	for(auto i:s){
		map[i]++;
	}


	int count = 0;
	char ch;
	string ans = "";


	for(auto i:map){
		if(i.second%2){
			ch = i.F;
			count++;
			continue;
		}

		string temp(i.S/2,i.F);
		ans = temp + ans + temp;
	}

	if(count<=1){
		if(count==1){

			if(ans.size()%2){
				cout<<"NO SOLUTION\n";
			}else{
				cout<<ans.substr(0,ans.size()/2) + "" + ch + "" + ans.substr(ans.size()/2);
			}
		}else{
			cout<<ans;
		}
	}else{
		cout<<"NO SOLUTION\n";
	}
	//}

}
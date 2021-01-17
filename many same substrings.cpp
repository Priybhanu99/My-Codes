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

	// int t;
	//cin>>t; while(t--){

	int n,t;
	cin>>n>>t;

	string s;
	cin>>s;

	string x;
	int index = 0;

	for (int i = 1; i < n; ++i)
	{
		string temp  = s.substr(i);
		bool flag = 1;
		int c = 0;
		for(int j=0;j<temp.size();j++){

			if(temp[j]!=s[c]){
				flag = 0;
				break;
			}
			c++;
		}

		if(flag){
			x = temp;
			index = i;
			break;
		}
	}

	if(x==""){
		for (int i = 0; i < t; ++i)
		{
			cout<<s;
		}
	}else{

		string temp = s.substr(n-index);
		cout<<s;

		for (int i = 0; i < t-1; ++i)
		{
			cout<<temp;
		}

	}

}
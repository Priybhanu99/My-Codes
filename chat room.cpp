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

	string temp = "hello";
	int index = 0;

	int i=0;
	while(i<s.length()){
		if(s[i]==temp[index]){
			index++;
		}
		i++;
	}

	// cout<<index<<" ";
	if(index==temp.size()){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	//}

}
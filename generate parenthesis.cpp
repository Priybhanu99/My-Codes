#include <bits/stdc++.h>
using namespace std;

#define int long long int

void generate_parenthesis(string s,int open,int close,int n){

	if(open==n&&close==n){
		cout<<s<<endl;
		return;
	}

	if(open>close){
		generate_parenthesis(s+")",open,close+1,n);
	}

	if(open<n){
		generate_parenthesis(s+"(",open+1,close,n);
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n;
	cin>>n;
	generate_parenthesis("(",1,0,n);

}


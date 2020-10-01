#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a;
		cin>>b;
		cout<<a;
		string ans[a.length()];
		for(int i=0;i<a.length();i++){
			ans[i] = (int)a[i] ^ (int)b[i];
			cout<<ans[i];
		}
		cout<<endl;
	}
	return 0;
}
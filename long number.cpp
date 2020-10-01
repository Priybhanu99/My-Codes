#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	//cin>>t; while(t--){

	cin>>n;

	string s;
	cin>>s;

	int a[10];
	for(int i=1;i<10;i++){
		cin>>a[i];
	}

	bool flag = true;

	for (int i = 0; i < n; ++i)
	{
		if(flag == false && (s[i]-'0')>a[s[i]-'0']){
			break;
		}
		if(a[s[i]-'0']>(s[i]-'0')){
			s[i] = (char)(a[s[i]-'0']+'0');
			flag = false;
		}
	}

	cout<<s;
	//}
}


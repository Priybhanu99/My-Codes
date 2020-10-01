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


	int n;
	cin>>n;

	string s;
	cin>>s;

	int x = 1;

	int a[] = {	0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55};

	for (int i = 0;i<11;i++)
	{
		if(a[i]>=n){
			break;
		}
		cout<<s[a[i]];
		//cout<<a[i];
	}

}



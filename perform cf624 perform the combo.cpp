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

	int t;
	cin>>t; while(t--){

		int n,m;
		cin>>n>>m;

		map<char,int> maps;
		for (int i = 0; i < 26; ++i)
		{
			maps[char(97+i)] = 0;
		}

		for (int i = 0; i < 26; ++i)
		{
			cout<<maps[char(97+i)]<<" ";
		}

		cout<<"\n";


		char str[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>str[i];
			cout<<"incrementing "<<str[i]<<"\n";
			maps[str[i]] ++;
		}

		for (int i = 0; i < 26; ++i)
		{
			cout<<maps[str[i]]<<" ";
		}

		cout<<"\n";

		int b[m];
		for (int i = 0; i < m; ++i)
		{
			cin>>b[i];
		}



		for (int i = 0; i <m; ++i)
		{
			for(int j=0;j<b[i];j++){
				cout<<"incrementing "<<str[j]<<"\n";
				maps[str[j]]++;
			}
		}

		for (int i = 0; i < 26; ++i)
		{
			cout<<maps[str[i]]<<" ";
		}

		cout<<"\n";





	}
}


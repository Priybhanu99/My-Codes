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
	cin>>t; while(t--){

		string a,b;
		cin>>a>>b;

		if(a.size()<b.size()){
			string temp = a;
			a = b;
			b = temp;
		}

		// cout<<a<<" "<<b<<" ";

		// bool flag = 1;
		// int i= 0;
		// while(i <= a.size()-b.size()+1)
		// {
		// 	string temp = a.substr(i,b.size());
		// 	// cout<<temp<<"\n";
		// 	if(temp!=b){
		// 		flag = 0;
		// 		break;
		// 	}else{
		// 		i+=b.size();
		// 	}
		// }

		// if(!flag){
		// 	cout<<"-1\n";
		// }else{
		// 	int x = (a.size()*b.size())/__gcd(a.size(),b.size());
		// 	int num = x/b.size();
		// 	for (int i = 0; i < num; ++i)
		// 	{
		// 		cout<<b;
		// 	}
		// 	cout<<"\n";
		// }

		int x = (a.size()*b.size())/__gcd(a.size(),b.size());
		int num = x/b.size();
		string one;
		for (int i = 0; i < num; ++i)
		{
			one += b;
		}

		string two;
		for (int i = 0; i < x/a.size(); ++i)
		{
			two += a;
		}
		if(one!=two){
			cout<<"-1\n";
		}else{
			cout<<one<<"\n";
		}

	}

}
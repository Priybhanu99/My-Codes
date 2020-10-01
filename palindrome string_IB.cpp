#include <bits/stdc++.h>
using namespace std;

//#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	string A;
	getline(cin,A);
	
	string s;
	for(int i =0;i<A.size();i++){

		if(A[i]==' ') continue;
		int ascii = int(A[i]);

		if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)){
			s += A[i];
		} 
	}

	cout<<s;

	// char ch = '9';
	// cout<<int(ch);
}


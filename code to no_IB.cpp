#include <bits/stdc++.h>
using namespace std;

#define int long long int

char getchar(int n){
	if(n==0){
		return n+90;
	}
	return (char)(n+64);
}

string getcodes(int A){

	string ans;

	while(A!=0){
		int a = A%26;
		//int b = A/26;

		if(a==0){
			ans = "Z" + ans;
			A = A/26-1;
		}
		else{
			ans = getchar(a)+ans;
			A = A/26;
		}
	}

	return ans;
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

	cout<<getcodes(n);
}


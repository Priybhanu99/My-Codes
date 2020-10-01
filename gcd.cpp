#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(a==0||b==0) return a+b;

	return gcd(b,a%b);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	int a,b;
	cin>>a>>b;
	int ans = gcd(a,b);
	cout<<ans;
	return 0;
}


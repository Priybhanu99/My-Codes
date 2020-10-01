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

	string s1,s2;
	cin>>s1>>s2;

	int h1 = (s1[0]-'0')*10+s1[1]-'0';
	int h2 = (s2[0]-'0')*10+s2[1]-'0';
	
	int m1 = (s1[3]-'0')*10+s1[4]-'0';
	int m2 = (s2[3]-'0')*10+s2[4]-'0';

	int diff = h2*60 + m2 - (h1*60 + m1);

	diff /= 2;
	int hrs = (diff)/60;
	float mins = diff%60;

	if(m1+mins>=60){
		m1 -= 60;
		// mins = 0;
		hrs++;
	}


	string one,two;
	one="";
	two = "";

	if((h1+hrs)<10){
		one = "0";
	}

	if((m1+mins)<10){
		two = "0";
	}

	cout<<one<<h1+hrs<<":"<<two<<m1+mins;
	
}
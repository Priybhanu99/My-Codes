#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

string multiply(string a,string b){

	vector<int> ans(a.size()+b.size(),0);

	int a_i = 0;
	int b_i = 0;

	for(int i=a.size()-1;i>=0;i--){

		int carry = 0;
		b_i = 0;

		int n1 = a[i]-'0';

		for(int j=b.size()-1;j>=0;j--){

			int n2 = b[j]-'0';
			int total = n1*n2 + ans[a_i+b_i] + carry;
			carry = total/10;

			ans[a_i + b_i] = total%10;

			b_i++;
		}

		if(carry>0){
			ans[a_i+b_i] += carry;
		}

		a_i++;
	}

	int i = ans.size()-1;
	while(i>=0 && ans[i]==0){
		i--;
	}

	if(i==-1){
		return "0";
	}

	string result;

	while(i>=0){
		result += to_string(ans[i]);
		i--;
	}

	return result;

	//
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	string a = multiply("1234","12");
	cout<<a;

}


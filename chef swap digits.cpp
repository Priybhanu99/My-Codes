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
	cin>>t; while(t--){

		int a,b;
		cin>>a>>b;

		int sum = a+b;

		string s1 = to_string(a);
		// if(s1.size()==1){
		// 	s1 += "0";
		// 	swap(s1[0],s1[1]);
		// }
		string s2 = to_string(b);
		// if(s2.size()==1){
		// 	s2 += "0";
		// 	swap(s2[0],s2[1]);
		// }

		//cout<<s1<<" "<<s2<<"\n";
		for (int i = 0; i < s1.size(); ++i)
		{
			
			for (int j=0;j<s2.size();j++)
			{
				string one = s1;
				string two = s2;
				swap(one[i],two[j]);
				int s = stoi(one) + stoi(two);
				//cout<<s<<" ";
				sum = max(s,sum);
			}
		}

		cout<<sum<<"\n";

	}
}


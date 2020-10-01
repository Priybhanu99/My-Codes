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

		string one = to_string(a);
		string two = to_string(b);
		

		int max = a+b;
		for(int i=0;i<one.size();i++){
			for(int j=0;j<two.size();j++){
				string temp1,temp2;
				temp1 = one;
				temp2 = two;
				swap(temp1[i],temp2[j]);
				int x = stoi(temp1);
				int y = stoi(temp2);

				if(x+y>max){
					max = x+y;
					//cout<<x<<" "<<y;
				}
			}
		}

		cout<<max<<"\n";
	}
}


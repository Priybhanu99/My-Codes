#include <bits/stdc++.h>
using namespace std;

#define int long long int

int counter = 0;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	    #endif
	
	int t,n;
	cin>>t; while(t--){

		cin>>n;

		string x;
		counter ++;
		cin>>x;

		string one,two;
		string one1,two2;

		for (int i = 0; i < n; ++i)
		{
			counter ++;
			if(x[i]=='1'){
				if(one>two){
					one += "0";
					two += "1";
					counter ++;
				}else{
					one += "1";
					two += "0";
					counter ++;
				}
			}else if(x[i]=='2'){
				if(one>two){
					one += "0";
					two += "2";
				}else{
					one += "1";
					two += "1";
				}
			}else{
				one += "0";
				two += "0";
			}
			
		}

		cout<<one<<"\n"<<two<<"\n";


	}
}


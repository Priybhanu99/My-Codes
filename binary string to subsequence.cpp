#include<bits/stdc++.h>
using namespace std;

int main(){

	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	    #endif


	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		string s;
		cin>>s;

		int ans[n]  = {-1};

		int count = 1;

		ans[0]= 1;
		set<int> s;
		for (int i = 0; i < n; ++i)
		{
			s.insert(i);
		}
		

		while(!s.empty()){
			for(int i=0;i<n;i++){
				if(ans[i]!=-1){}
			}
		}



	}

}
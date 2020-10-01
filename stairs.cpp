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

		int n;
		cin>>n;

		set<int> s;
		int temp = 100000;
		while(n>0 && temp>0){
			int num = (temp*(temp+1))/2;

			if(n>=num && temp){
				// cout<<num<<" ";
				n -= num;
				s.insert(temp);
			}

			temp--;
		}

		cout<<s.size()<<"\n";
		

	}

}
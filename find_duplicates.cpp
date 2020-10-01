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

	string s;
	cin>>s;

	int t;
	cin>>t; while(t--){
		int c;
		cin>>c;

		if(c==1){
			int index;
			cin>>index;
			char ch;
			cin>>ch;
			s[index-1] = ch;
		}else{
			int l,r;
			cin>>l>>r;
			map<char,int> sets;
			for(int i=l-1;i<r;i++){
			    if(i<0||i>s.length()-1){
			        continue;
			    }
				sets[s[i]]++;
			}
			// cout<<(r-l)-sets.size()+1<<endl;
			int count=0;
			for(auto i:sets){
				if(i.second>1){
					count++;
				}
			}
			cout<<count<<endl;
		}
	}
}


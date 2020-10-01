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

	string str,substr;
	getline(cin,str);
	cin>>substr;
	map<char,int> count;

	int j=0;
	int length = 0;
	for(int i=0;i<str.size();i++){
		//if first character arrives
		if(substr[j]==str[i]){
			count[str[i]] = i;
			j++;
		}

		if(map.size()==substr.size()){
			// one substring found in the above string
			int x = i - map[substr[0]];
			if(x<length){
				length = x;
			}
			
			i = map[substr[0]];
		}
	}
	
}


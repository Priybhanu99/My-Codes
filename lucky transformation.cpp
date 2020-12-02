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
	//cin>>t; while(t--){

	int n,k;
	cin>>n>>k;

	string s;
	cin>>s;

	int count = 0;
	int offset = 0;
	unordered_map<string,int> map;
	string temp = s;

	for (int i = 0; i < k; ++i){

		map[s] = i;

		
		for(int j=0;j<n-1;j++){
			if(s[j]=='4' && s[j+1]=='7'){

				if(j%2==0){
					s[j+1] = '4';
				}else{
					s[j] = '7';
				}
				break;
			}
			
		}
		if((map.count(s)!=0)){
			offset = map[s];
			count = i-map[s] + 1;
			break;
		}
	}

	int i = (k-offset)/count;
	// if((k-offset)%count!=0){
	// 	i++;
	// }

	// i--;
	// cout<<i<<" ";
	while(i--){
		for(int j=0;j<n-1;j++){
			if(s[j]=='4' && s[j+1]=='7'){

				if(j%2==0){
					s[j+1] = '4';
				}else{
					s[j] = '7';
				}
				break;
			}
			
		}
	}
	// cout<<s<<" "<<offset<<" "<<count<<"\n";
	cout<<s<<"\n";

	//}

}
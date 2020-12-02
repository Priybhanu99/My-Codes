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

	string s;
	cin>>s;

	int i=0;
	int n = s.size();
	// while(i<s.size()){
	// 	int index = i;
	// 	if(s[i]=='0'){
	// 		int a[3] ={};
	// 		while(i<n && (s[i]=='0' || s[i]='1')){
	// 			a[s[i]-'0']++;
	// 			i++;
	// 		}

	// 		sort(s.begin()+index, s.begin()+i);

	// 	}else if(s[i]=='1'){
	// 		int a[3] = {};
	// 		if(i<n-1){
	// 			if(s[i+1]=='')
	// 		}
	// 	}
	// }

	// bool flag = true;
	// int index = 0;
	// while(i<n){
	// 	if(s[i]=='0' && flag == false){
	// 		sort(s.begin()+index, s.begin()+i);
	// 		flag = true;
	// 		index = i;
	// 	}else{

	// 		if(s[i]=='2'){
	// 			flag = false;
	// 		}
	// 		i++;
	// 	}
	// }

	// sort(s.begin()+index,s.end());

	// cout<<s<<"\n";

	int temp = 0;
	string ans = "";

	while(i<n){
		if(s[i]=='1'){
			temp++;
		}else{

			ans += (s[i]);
		}
		i++;
	}

	string one = "";
	for(int x=0;x<temp;x++){
		one += "1";
	}

	i=0;

	bool flag = true;
	while(i<ans.size()){
		if(ans[i]=='2'){
			ans = ans.substr(0,i) + one + ans.substr(i);
			flag = false;
			break;
		}
		i++;
	}

	if(flag){
		ans += one;
	}

	cout<<ans<<"\n";




}
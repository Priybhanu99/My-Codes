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

	string str;
	cin>>str;

	int countab=0,index;
	int countba=0;
	int n = str.size();

	for(int i=0;i<n-1;i++){
		if(str[i]=='A'&&str[i+1]=='B'){
			countab++;
			index=i;
		}
	}
	if(countab>0){
		bool flag = false;
		for(int i=index+2;i<n-1;i++){
			if(str[i]=='B'&&str[i+1]=='A'){
				countba++;
				flag = true;
				break;
			}
		}
		if(flag==true){
			cout<<"YES";
		}else{
			cout<<"NO";
		}

	}else{
		cout<<"NO";
	}

	

}


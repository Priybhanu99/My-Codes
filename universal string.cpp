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

		string s;
		cin>>s;

		if(s.size()<=1){
			cout<<"YES\n";
			continue;
		}

		// int dp[26]={};

		// int start = -1;
		// for(int i=0;i<s.size();i++){
		// 	dp[s[i]-97] += 1;
		// }

		// // for(int i=0;i<26;i++){
		// // 	cout<<dp[i]<<" ";
		// // }

		// int n = 26;
		// bool flag = true;
		// for (int i = 0; i <n ; ++i)
		// {
		// 	if(dp[i]>=2){
		// 		flag = false;
		// 		break;
		// 	}
		// }
		// if(flag == false){
		// 	cout<<"NO\n";
		// 	continue;
		// }
		// flag = true;

		// //start
		// for (int i = 0; i < 26; ++i)
		// {
		// 	if(start==-1){
		// 		if(dp[i]==1){
		// 			start = i;
		// 			break;
		// 		}
		// 	}
		// }
		// // cout<<"start : "<<start<<"-";
		

		// int j = start;
		// while(j<n && dp[j]==1){
		// 	j++;
		// }

		// // cout<<"   " <<dp[0]<<"====";

		// flag = true;
		// // cout<<"  j = "<<j<<"\n";

		// int x = -1;

		// for(int i=j;i<n;i++){
		// 	if(dp[i]==1){
		// 		x = i;
		// 		break;
		// 	}
		// }

		// if(x==-1){
		// 	cout<<"YES\n";
		// 	continue;
		// }

		// for(int i=x+1;i<n;i++){
		// 	if(dp[i]==0){
		// 		flag = false;
		// 		break;
		// 	}
		// }

		// if(flag == true){
		// 	cout<<"YES\n";
		// }else{
		// 	cout<<"NO\n";
		// }
		// // cout<<x<<"\n";


		// int ch =( s[0]-97);
		// cout<<ch<<" ";
		// int i = 1;

		// bool flag = true;
		// int curr = 0;
		// for(;i<s.size();i++){
		// 	if((s[i]%26)!=(char)ch){
		// 		flag = false;
		// 		break;
		// 	}
		// 	ch++;
		// }
		
		bool flag = true;

		vector<int> a;
		for(int i=0;i<s.size();i++){
			a.push_back(s[i]-97);
		}

		// for (int i = 0; i < s.size(); ++i)
		// {
		// 	cout<<a[i]<<" ";
		// }

		bool inc = true;
		for(int i=1;i<a.size();i++){
			if(a[i]!=a[i-1]+1){
				if(a[i]!=0){
					flag = false;
					break;
				}
			}
		}

		if(flag==true){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

		





	}

}
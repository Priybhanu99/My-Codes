#include <bits/stdc++.h>
using namespace std;

//string dp[100][100];

string print_lcslength(string a,string b){
	if(a.length()==0||b.length()==0){
		return "";
	}

	string ans = "";


	if(a[0]==b[0]){
		ans += a[0];
		ans += print_lcslength(a.substr(1),b.substr(1));
	}else{
		
		string s1 = print_lcslength(a,b.substr(1));
		string s2 = print_lcslength(a.substr(1),b);
		//cout<<s1<<s2;
		ans = (s1.length()>s2.length()) ? s1 : s2;
		//cout<<ans;
	}

	//dp[a][b] = ans;
	return ans;

}

void print_lcs(string a,string b){

	int dp[100][100];

	//memset(dp,0,sizeof(dp));

	int m = a.length();
	int n = b.length();

	for (int i = 0; i <=m; ++i)
	{
		for (int j = 0; j <=n; ++j)
		{
			if(i==0||j==0){
				dp[i][j] = 0;
			}
		}
		
	}

	for (int i = 1; i <=m; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if(a[i-1]==b[j-1]){
				dp[i][j] = 1+dp[i-1][j-1];
			}
			else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
			
		}
	}

	char ans[dp[m][n]+1];
	ans[dp[m][n]+1] = '\0';

	int i=m,j=n,index = dp[m][n];

	while(i>0&&j>0){
		if(a[i-1]==b[j-1]){
			ans[index-1] = a[i-1];
			i--;
			j--;
			index--;
		}else if(dp[i-1][j]>dp[i][j-1]){
			i--;
		}else{
			j--;
		}
	}

	cout<<ans;

}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	    #endif
	
	string a,b;
	cin>>a>>b;

	//memset(dp,"",sizeof(dp));
	//string ans =print_lcs(a,b);

	print_lcs(a,b);

	
}


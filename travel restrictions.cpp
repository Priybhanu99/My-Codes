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
	int tc = 0;

	cin>>t; while(t--){
		tc++;

		int n;
		cin>>n;

		string in,ou;
		cin>>in>>ou;

		char ans[n][n];

		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<n;j++){
				if(i==j){
					ans[i][j] = 'Y';
					continue;
				}

				if(in[j]=='N' || ou[i]=='N'){
					ans[i][j] = 'N';
					continue;
				}

				if(i<j){
					if(ans[i][j-1]=='Y' && ou[j-1]=='Y'){
						ans[i][j] = 'Y';
					}else{
						ans[i][j] = 'N';
					}
				}else{
					if(ans[i-1][j]=='Y' && in[i-1]=='Y'){
						ans[i][j] = 'Y';
					}else{
						ans[i][j] = 'N';
					}
				}
			}
		}

		cout<<"Case #"<<tc<<":\n";
		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<n;j++){
				cout<<ans[i][j];
			}
			cout<<"\n";
		}

	}

}


// Case #1: 
// YY
// YY
// Case #2: 
// YY
// NY
// Case #3: 
// YN
// NY
// Case #4: 
// YNNNN
// YYNNN
// NNYYN
// NNNYN
// NNNYY
// Case #5: 
// YYYNNNNNNN
// NYYNNNNNNN
// NNYNNNNNNN
// NNYYNNNNNN
// NNYYYNNNNN
// NNNNNYNNNN
// NNNNNNYYYN
// NNNNNNYYYN
// NNNNNNNNYN
// NNNNNNNNYY

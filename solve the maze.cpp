#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 51;
char a[N][N];

bool block_B(int n,int m){

	if(a[n-2][m-1]=='B' || a[n-1][m-2]=='B'){
		return false;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] == 'B'){
				//left
				if(j-1>=0){
					if(a[i][j-1]!='G'&&a[i][j-1] !='B'){
						a[i][j-1] = '#';
					}
				}

				//right
				if(j+1<m){
					if(a[i][j+1]!='G' && a[i][j+1]!='B')
						a[i][j+1] = '#';
				}

				if(i-1>=0){
					if(a[i-1][j]!='G' && a[i-1][j]!='B')
						a[i-1][j] = '#';
				}

				if(i+1<n){
					if(a[i+1][j]!='G' && a[i+1][j]!='B')
						a[i+1][j] = '#';
				}
			}
		}
	}
	return true;
}


bool checkg(int i,int j,int n,int m){

	if(i<0 || j>m || i>n || j<0){
		return false;
	}

	if(i==n-1 && j==n-1 && (a[i][j]=='.')){
		return true;
	}

	bool ans = false;
	if(a[i-1][j]!='#' && a[i-1][j]!='B'){
		ans = ans | checkg(i-1,j,n,m);
	}

	if(a[i][j+1]!='#' && a[i][j+1]!='B'){
		ans = ans|checkg(i,j+1,n,m);
	}

	if(a[i+1][j]!='#' && a[i+1][j]!='B'){
		ans = ans|checkg(i+1,j,n,m);
	}

	return ans;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;	
	cin>>t; while(t--){

		int n,m;
		cin>>n>>m;

		//memset(a,'.',sizeof(a));

		int countg = 0;
		for (int i = 0; i < n; ++i)
		{
			
			for(int j=0;j<m;j++){
				char ch;
				cin>>ch;

				a[i][j] = ch;
				if(ch=='G'){
					countg++;
				}
			}
		}

		if(countg==0){
			cout<<"Yes\n";
			continue;
		}

		bool flag = block_B(n,m);
		if(flag==false){
			cout<<"No\n";
			continue;
		}

		flag = true;
		for (int i = 0; i < n; ++i){
			for(int j=0;j<m;j++){
				if(a[i][j]=='G'){
					bool ans = checkg(i,j,n,m);
					if(ans==false){
						flag = false;
						break;
					}
				}
			}
		}

		if(flag==true){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}
	}
}


#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int N = 62;
int xy[N][N];

int n;


void func(int i,int j){

	if(i<1 || j<1 || i>n || j>n || j>i){
		return;
	}

	cout<<"1 "<<i<<" "<<"1 "<<j<<" "<<n<<endl;
	char x;
	cin>>x;



	if(x==0){
		return;
	}

	if(i==j){
		for(int x=1;x<=n;x++){
			cout<<"1 "<<i<<" "<<x<<" "<<i<<" "<<x<<endl;
			char temp;
			cin>>temp;

			xy[i-1][x-1] = temp;
		}
		return;
	}

	func(i,j/2);
	func(j/2+1,j);


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

		int p;
		cin>>n>>p;

		
		memset(xy,0,sizeof(xy));

		int x = 0;
		

		func(1,n);

		cout<<"2"<<endl;
		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<n;j++){
				cout<<xy[i][j]<<" ";
			}
			cout<<endl;
		}

		cin>>x;
		if(x==-1){
			break;
		}


	}
}


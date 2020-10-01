#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int N = 62;
int xy[N][N];

int n;

void fun(int x1,int y1,int x2,int y2){
	if(x1<0 || y1<0 || x1>n || y1>n || x1>x2 || y1>y2){
		return;
	}

	if(x1==x2 && y1==y2){
		cout<<"1 "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
		char x;
		cin>>x;

		xy[x1-1][y1-1] = x;
		return;
	}

	int x;
	cout<<"1 "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
	cin>>x;
	if(x==0){
		return;
	}


	if((x2-x1)>=(y2-y1)){
		fun(x1,y1,x2/2,y2);
		fun(x2/2+1,y1,x2,y2);
	}else{
		fun(x1,y1,x2,y2/2);
		fun(x1,y2/2+1,x2,y2);
	}
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

		fun(1,1,n,n);

		cout<<"2"<<endl;
		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<n;j++){
				cout<<xy[i][j]<<" ";
			}
			cout<<endl;
		}
		int x;
		cin>>x;
		if(x==-1){
			break;
		}


	}
}
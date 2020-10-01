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

	int t;
	int c = 0;
	cin>>t; while(t--){

		c++;
		int x,y;
		cin>>x>>y;

		string s;
		cin>>s;

		int x1 = 0;
		int y1 = 0;

		bool flag = true;
		int count = 0;

		int grid[100][100];
		memset(grid,0,sizeof(grid));

		for (int i = 0; i < s.size(); ++i)
		{				
			if(s[i]=='N'){
				grid[x][y+1] = i+1;
				
			}
			if(s[i]=='S'){
				grid[x][y-1] = i+1;
			
			}
			if(s[i]=='E'){
				grid[x+1][y] = i+1;
				
			}
			if(s[i]=='W'){
				grid[x-1][y] = i+1;
				
			}



			// if(grid[x][y]==grid[x1][y1]){
			// 	flag = false;
			// 	count = grid[x][y];
			// 	break;
			// }
		}


		for (int i =10;i>=0;i--)
		{
			for(int j=0;j<10;j++){
				cout<<grid[i][j]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";

		// for(int i=0;i<s.size();i++){

		// }

		// for (int i = 0; i < s.size(); ++i)
		// {	
		// 	if(s[i]=='N'){
		// 		y++;
		// 	}else if(s[i]=='S'){
		// 		y--;
		// 	}else if(s[i]=='E'){
		// 		x++;
		// 	}else{
		// 		x--;
		// 	}
		// 	if(x+y<=s.size()){
		// 		count = s.size();
		// 		flag = false;
		// 		break;
		// 	}
		// }


		if(flag == true){
			cout<<"Case #"<<c<<": IMPOSSIBLE"<<"\n";

		}else{
			cout<<"Case #"<<c<<": "<<count<<"\n";

		}

	}
}


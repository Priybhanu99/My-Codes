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

		string ans;
		if((x+y)%2==0){
			ans = "IMPOSSIBLE";
		}else{
			if(x>=0 && y>=0){//1
				if(x==1 && y==0){
					ans += 'E';
				}else if(x==1 && y==2){
					ans += "EN";
				}else if(x==2 && y==1){
					ans += "NE";
				}else if(x==2 && y==3){
					ans += "SEN";
				}else if(x==3 && y==0){
					ans += "EE";
				}else if(x==3 && y==4){
					ans += "EEN";
				}else if(x==4 && y==3){
					ans += "NNE";
				}else if(x==0 && y==1){
					ans += 'N';
				}else if(x==4 && y==1){
					ans += "SNE";
				}else if(x==3 && y==2){
					ans += "WNE";
				}else if(x==0 && y==3){
					ans += "NN";
				}else if(x==1 && y==4){
					ans += "WEN";
				}
				else{
					ans = "IMPOSSIBLE";
				}
			}
			else if(x<0 && y>0){
				//2
				x = abs(x);
				y = abs(y);
				if(x==1 && y==0){
					ans += 'W';
				}else if(x==1 && y==2){
					ans += "WN";
				}else if(x==2 && y==1){
					ans += "NW";
				}else if(x==2 && y==3){
					ans += "SWN";
				}else if(x==3 && y==0){
					ans += "W";
				}else if(x==3 && y==4){
					ans += "WN";
				}else if(x==4 && y==3){
					ans += "NNW";
				}else if(x==0 && y==1){
					ans += 'N';
				}else if(x==4 && y==1){
					ans += "SNW";
				}else if(x==3 && y==2){
					ans += "ENW";
				}else if(x==0 && y==3){
					ans += "NN";
				}else if(x==1 && y==4){
					ans += "EWN";
				}
				else{
					ans = "IMPOSSIBLE";
				}
			}else if(x<0 && y<0){
				//3
				x = abs(x);
				y = abs(y);
				if(x==1 && y==0){
					ans += 'W';
				}else if(x==1 && y==2){
					ans += "WS";
				}else if(x==2 && y==1){
					ans += "SW";
				}else if(x==2 && y==3){
					ans += "NWS";
				}else if(x==3 && y==0){
					ans += "W";
				}else if(x==3 && y==4){
					ans += "WS";
				}else if(x==4 && y==3){
					ans += "SW";
				}else if(x==0 && y==1){
					ans += 'S';
				}else if(x==4 && y==1){
					ans += "NSW";
				}else if(x==3 && y==2){
					ans += "ESW";
				}else if(x==0 && y==3){
					ans += "S";
				}else if(x==1 && y==4){
					ans += "EWS";
				}
				else{
					ans = "IMPOSSIBLE";
				}
			}else if(x>0 && y<0){
				//4
				x = abs(x);
				y = abs(y);
				if(x==1 && y==0){
					ans += 'E';
				}else if(x==1 && y==2){
					ans += "ES";
				}else if(x==2 && y==1){
					ans += "SE";
				}else if(x==2 && y==3){
					ans += "NES";
				}else if(x==3 && y==0){
					ans += "EE";
				}else if(x==3 && y==4){
					ans += "EES";
				}else if(x==4 && y==3){
					ans += "SE";
				}else if(x==0 && y==1){
					ans += 'S';
				}else if(x==4 && y==1){
					ans += "NSE";
				}else if(x==3 && y==2){
					ans += "WSE";
				}else if(x==0 && y==3){
					ans += "S";
				}else if(x==1 && y==4){
					ans += "WES";
				}
				else{
					ans = "IMPOSSIBLE";
				}
			}
		}

		if(x==-1&&y==0){
			ans = 'W';
		}else if(x==0&&y==-1){
			ans = 'S';
		}else if(x==-3&&y==0){
			ans = "WW";
		}else if(x==0&&y==-3){
			ans = "SS";
		}else if(x==0&&y==1){
			ans = 'N';
		}else if(x==0&&y==3){
			ans = "NN";
		}

		cout<<"Case #"<<c<<": "<<ans<<"\n";
	}
}



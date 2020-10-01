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

	int t,n;
	int tno = 0;
	cin>>t; while(t--){

		tno++;
		cin>>n;
		int a[2000];

		memset(a,0,sizeof(a));
		bool flag = true;

		//string ans;

		pair<int,pair<int,int>> p[n];

		for (int i = 0; i < n; ++i)
		{
			int x,y;
			cin>>x>>y;
			p[i].first = x;
			p[i].second.first= y;
			p[i].second.second = i;
		}

		char ch[2000];
		memset(ch,'0',sizeof(ch));

		sort(p,p+n);

		char ans[n];

		int last_ans = 0;
		//0 - c

		for (int i = 0; i < n; ++i)
		{
			int x,y;
			x = p[i].first;
			y = p[i].second.first;
			int index = p[i].second.second;
			//cout<<x<<","<<y<<"\n";

			bool ispresentc = false;
			//char ch = j;
			for(int j=x;j<y;j++){
				if(a[j]+1>2){
					flag = false;
					break;
				}
				if(a[j]==1){
					ispresentc = true;
					//ch = c;
				}
				a[j]++ ;
			}

			// if(i==0){
			// 	for(int z = x;z<y;z++){
			// 		ch[z] = 'c';
			// 	}
			// 	ans[index] = 'C';
			// 	last_ans = 0;
			// 	continue;
			// }

			if(ispresentc == true){
				if(ch[x]=='c'){
					for(int z = x;z<y;z++){
						ch[z] = 'j';
					}
					ans[index] = 'J';
				}else{
					for(int z = x;z<y;z++){
						ch[z] = 'c';
					}
					ans[index] = 'C';
				}
				
			}else{
				for(int z = x;z<y;z++){
					ch[z] = 'c';
				}
				ans[index] = 'C';
			}

		}

		cout<<"Case #"<<tno<<": ";
		if(flag){
			for (int i = 0; i < n; ++i){
				cout<<ans[i];
			}
			cout<<"\n";
			
		}else{
			cout<<"IMPOSSIBLE\n";
		}

	}
}


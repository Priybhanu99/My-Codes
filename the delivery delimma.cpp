#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

#define db(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << '\n'; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
	const char* comma = strchr(names + 1, ',');
	cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
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

		int n;
		cin>>n;

		int a[n],b[n];

		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}

		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
		}

		vector<P> p(n);
		for (int i = 0; i < n; ++i)
		{
			p[i] = make_pair(a[i],b[i]);
		}

		sort(p.begin(), p.end());



		int ans = 0;

		int i= 0,temp = 0;

		for(int i=0;i<p.size();i++){


			// //if i order
			// int ans1 = max(ans,p[i].F);

			// //if i go and take
			// int ans2 = max(ans,temp+p[i].S);

			// if(ans1>ans2){
			// 	temp += p[i].S;
			// }

			// ans = min(ans1,ans2);
			temp += p[i].S;


			ans = min(p[i].F,temp);

			if(ans == p[i].F){
				temp = 0;
			}

			// db(ans,temp);
		}
		
		cout<<ans<<"\n";

	}

}
/* 3 4 5 7
   2 2 4 1
   

  
  10 25 26 30 47 59 64 82 89
  12 37 33 73 59 92 47 38 88

 */
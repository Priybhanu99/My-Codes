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

vector<int> factors(int n){
	vector<int> ans;
	ans.pb(1);


	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			ans.pb(i);
			if(i*i!=n){
				ans.pb(n/i);
			}
			while(n%i==0){
				n/=i;
			}
		}
	}

	if(n!=1){
		ans.pb(n);
	}
	sort(ans.begin(), ans.end());
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

		int n;
		cin>>n;

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			sum += a[i];
		}

		// vector<int> factor = factors(sum);
		// factor.pb(sum);

		int ans = INT_MIN;              
		for(int no_of_terms = 1;no_of_terms<=n;no_of_terms++){
			
			int x = sum/no_of_terms;

			if(no_of_terms*x==sum){

				int curr = 0;
				int count = 0;
				bool flag = true;


				for(int j=0;j<n;j++){
					
					curr+=a[j];

					if(curr>x){
						flag = false;
						break;
					}

					if(curr==x){
						curr = 0;
						count++;
					}
				}

				// db(x,no_of_terms,count);

				if(count==no_of_terms){
					ans = max(ans,no_of_terms);
				}
			}
			
		}

		cout<<n-ans<<"\n";
	}

}
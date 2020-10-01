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
	//cin>>t; while(t--){

	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	stack<int> s;

	int leftsv[n],rightsv[n];

	for (int i = 0; i < n; ++i)
	{
		int index = 0;
		bool flag = true;
		while(!s.empty()&&flag == true){
			if(a[s.top()]>a[i]){
				index = s.top();
				flag = false;
			}else{
				s.pop();
			}
		}
		leftsv[i] = index;
		s.push(i);
	}

	stack<int> s1;
	for (int i = n-1; i>=0; i--)
	{
		int index = 0;
		bool flag = true;
		while(!s1.empty()&&flag == true){
			if(a[s1.top()]>a[i]){
				index = s1.top();
				flag = false;
			}else{
				s1.pop();
			}
		}
		rightsv[i] = index;
		s1.push(i);
	}


	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans = max(ans,leftsv[i]*rightsv[i]);
	}

	cout<<ans;





	//}
}


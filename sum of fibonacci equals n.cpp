#include <bits/stdc++.h>
using namespace std;

#define int long long int

vector<int> fib(int n){

	vector<int> a;
	a.push_back(1);
	// a.push_back(1);

	int x = 1;//2
	int y = 1;//2

	int temp = 1;
	while(temp <= n){

		int temp1 = x+y;
		x = y;
		y = temp1;

		temp = y;
		a.push_back(x);
	}

	return a;
}

int func(int n){

	vector<int> seq = fib(n);
	int count = 0;

	count++;
	n = n - seq[seq.size()-1];
	// cout<<seq[seq.size()-1]<<" ";
	while(n>0){
		int x = lower_bound(seq.begin(), seq.end(),n) - seq.begin();
		// cout<<n<<" "<<"x :"<<x;
		if(seq[x]>n){
			x--;
		}
		n -= seq[x];
		// cout<<seq[x]<<" ";
		count++;
	}
	// cout<<"\n";
	return count;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	//cin>>t; while(t--){

	// vector<int> a = fib(20);

	// for(auto i:a){

	// 	cout<<i<<" ";
	// }

	cout<<func(24);

	//}
}


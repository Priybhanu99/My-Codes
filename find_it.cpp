#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int N = 1e5+5;
int count1[N],sum[N];


void seive(int n){
	for(int i=2;i<=N;i++){
		for(int j=i;j<=N;j+=i){
			sum[i] += count1[j];
		}
		
	}
}
	

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n,num;
	cin>>n;

	//hashing of the array elements to the count1 array
	for (int i = 0; i < n; ++i)
	{
		cin>>num;
		count1[num] ++;
	}
	sum[1] = n;
	seive(n);

	int k;
	cin>>k;

	for (int i = 0; i < k; ++i)
	{
		int no;
		cin>>no;

		cout<<sum[no]<<endl;
	}

	

}


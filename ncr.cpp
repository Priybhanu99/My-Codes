#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	

		int N,K;
		cin>>N>>K;
		int n = N-1;
		int k = K-1;

		long long int sum = 1; //n-1-k+1 = n-k-1/k-1

		//(n-1)!/((k-1)!*(n-k)!) // n-1

		for(int i=1;i<=k;i++){
			sum *= (n-i+1)/i;
		}

		cout<<sum<<endl;	


	
}


#include<bits/stdc++.h>
using namespace std;

#define int long long int

void seive(int n){

	int a[n+1]; // 0 means not prime, 1 means prime
	
	//traverse on all odd nos and mark them as prime
	for(int i=3;i<=n;i+=2) a[i] = 1;

		for(int i=3;i<=n;i++){
		if(a[i]==1){ //if number is prime then mark all its multiple as not prime
			
			for(int j=i*i;j<=n;j+=2*i){ //take jumps of 2i to traverse on odd nos only
				a[j] = 0;
			}
		}
	}

	a[1] = 0;
	a[2] = 1; 

	for(int i=2;i<n;i++){
		if(a[i]==1)  cout<<i<<" ";
	}

}

int32_t main(){


	int t; cin>>t; while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];

		int x = 0;
		x++;
		x/= 2;

		x++;
		int odd=0,even=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			x++;
			x/= 2;

			x++;
			if(a[i]%2)
				odd++;
			else even++;
		}
		if(odd==0)
		{
			cout<<"No\n";
			continue;
		}

		x++;
		x/= 2;

		x++;

		odd--;
		k--;

		if(even==0)
		{




			if(k%2)
				cout<<"No\n";

			else cout<<"Yes\n";
			continue;

		}

		x++;
		x/= 2;

		x++;

		if(k==( even+odd))
		{








			if(odd%2)
				cout<<"No\n";

			else cout<<"Yes\n";
			continue;
		}

		x++;
		x/= 2;

		x++;
		cout<<"Yes\n";
		continue;



	}
	return 0;
}
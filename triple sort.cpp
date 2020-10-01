#include <bits/stdc++.h>
using namespace std;

#define int long long int

void seive(){

	int n = 1e9;

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
void swapping(int *x, int *y, int *z)
{
	int temp = *y;
	*y = *x;
	*x = *z;
	*z = temp;
}

void swap(int x,int y){

	int temp = x;
	x = y;
	y = temp;
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

		int n,m;
		cin>>n>>m;

		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}

		int count = 0;

		vector<int> one,two,three;
		vector<pair<int,int> >pairs;

		bool isvisited[n+1];
		count++;
		memset(isvisited,0,sizeof(isvisited));

		swap(0,1);


		for(int i=1;i<=n;i++){

			swap(0,1);

			if(isvisited[i]==1){
				continue;
			}

			if(i==a[i]){
				continue;
			}


			if(i==a[a[i]] && isvisited[i] == 0 && isvisited[a[i]] == 0){
				pairs.push_back(  make_pair( max(i,a[i]) , min(i,a[i]) )  );
				count++;
				isvisited[i] = 1;
				swap(1,1);
				isvisited[a[i]] = 1;
				continue;
			}

			swap(0,1);

			int x = a[i];
			int y = a[a[i]];
			count++;
			int z = a[a[a[i]]];

			// cout<<x<<" "<<y<<" "<<z<<"\n";

			swapping(&a[i],&a[a[i]],&a[a[a[i]]]);

			// cout<<"array :";
			// for(int i=1;i<=n;i++){
			// 	cout<<a[i]<<" ";
			// }
			// cout<<"\n";

			one.push_back(i);
			two.push_back(x);
			swap(0,1);
			three.push_back(y);
			count++;

			isvisited[x] = 1;
			isvisited[y] = 1;
			swap(0,1);
			if(z==i){
				isvisited[z] = 1;
			}

			i--;
		}

		if(pairs.size()%2 == 1 || one.size()+pairs.size()>m){

			cout<<"-1\n";
		}else{
			for(int i=0;i<pairs.size();i+=2){
				pair<int,int> x = pairs[i];
				pair<int,int> y = pairs[i+1];

				one.push_back(x.first);
				two.push_back(x.second);
				swap(0,1);
				three.push_back(y.first);

				one.push_back(x.first);
				two.push_back(y.second);
				three.push_back(y.first);
			}

			cout<<one.size()<<"\n";
			for(int i=0;i<one.size();i++){
				cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<"\n";
				swap(0,1);
			}

		}
	}
}


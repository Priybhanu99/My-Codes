#include <bits/stdc++.h>
using namespace std;

vector<int> prime;

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
		if(a[i]==1)	prime.push_back(i);
	}

}

bool iscomposite(int n){
	if(n==1||n==0){
		return true;
	}

	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return true;
		}
	}

	return false;
}

int no_of_digits(int N){
	int sum = 0;
	while(N!=0){
		sum += N%10;
		N /= 10;
	}

	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	int N;
	cin>>N;

	bool iscompositeN = iscomposite(N);//in sqrt(n)
	if(iscompositeN){

		seive(sqrt(N)+1);//upto sqrt(n) numbers
		int sum_digit = no_of_digits(N);
        cout<<"sum of digits :"<<sum_digit<<endl;
		vector<int> factors;//in sqrt(n)
         cout<<"primes :";
        for(auto x:prime){
            cout<<x<<" ";
        }
		int i=0;
		int p = prime[0];
       
        cout<<endl;
		while(p*p<=N){
			while(N%p==0){
				N = N/p;
				factors.push_back(p);
			}
			i++;
			p = prime[i];
		}

		if(N!=1){
			factors.push_back(N);
		}

		int sum_of_fact = 0;
        cout<<"factors :";
		for(auto y:factors){
            cout<<y<<" ";
			sum_of_fact += no_of_digits(y);
		}
        cout<<endl;
        cout<<"sum of fact :"<<sum_of_fact<<endl;
		if(sum_digit==sum_of_fact){
			cout<<"1";
			return 0;
		}else{
			cout<<"0";
			return 0;
		}


	}

	cout<<"0";
	return 0;

}


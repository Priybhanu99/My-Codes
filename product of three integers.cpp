#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int N = 1e3;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif


	int t,n;
	cin>>t; while(t--){

		cin>>n;

		int a,b,c;

		vector<int> factors;
		set<int> set;

		int temp = n;

		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				if(i*i==n){
					factors.push_back(i);
					set.insert(i);
					n /=i;
					continue;
				}
				factors.push_back(i);
				factors.push_back(n/i);
				set.insert(i);
				set.insert(n/i);
				n = n/i;
			}
		}
		if(n!=1){
			factors.push_back(n);
		}

		if(factors.size()<=2){
			cout<<"NO\n";
			continue;
		}

		bool flag = false;

		n = temp;


		for(int i=0;i<factors.size();i++){
			for(int j= i+1;j<factors.size();j++){

				if(flag==true){
					break;
				}

				a = factors[i];
				b = factors[j];
				c = n/(a*b);

				if(a==b || b==c || a==c){
					continue;
				}

				//cout<<a<<" "<<b<<" "<<c<<"\n";

				if(set.find(c)!=set.end()){
					flag = true;
					cout<<"YES\n";
					cout<<a<<" "<<b<<" "<<c<<"\n";
					break;
					break;
				}

			}
		}

		if(flag==false){
			cout<<"NO\n";
			continue;
		}
	}

}
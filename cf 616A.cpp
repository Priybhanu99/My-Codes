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
	cin>>t; while(t--){

		//sum - even
		//no - odd

		cin>>n;
		char s[n];
		int sum = 0;
		for(int i=0;i<n;i++){
			char c;
			cin>>c;
			sum+=c-'0';
			s[i] = c;
		}

		//sum -even ..no-odd
		if(sum%2==0&&(s[n-1]-'0')%2!=0){
			cout<<s<<endl;
			continue;
		}

		//sum - even no-even
		if(sum%2==0 && (s[n-1]-'0')%2==0){
			int i=1;
			while((s[n-i]-'0')%2!=0&&i<n){
				//remove last
				sum -= (s[n-i]-'0');
				i++;
			}
			if(i==n){
				cout<<"-1"<<endl;
				continue;
			}
			for (int j = 0; j <n-i ; ++j)
			{
				cout<<s[j];
			}
			cout<<endl;
		}
		
			//sum -even ..no-odd
		if(sum%2==0&&(s[n-2]-'0')%2!=0){
			for (int i = 0; i < n-1; ++i)
			{
				cout<<s[i];
			}
			cout<<endl;
			continue;
		}else{
			int count=2;
			while(sum%2!=0&&count<n){
				sum -= (s[n-count]-'0');
				count++;
			}
			if(count==n){
				cout<<"-1"<<endl;
			}else{
				for (int i = 0; i < count ; ++i)
				{
					cout<<s[i];
				}
				cout<<endl;
			}

		}


		//sum-odd ..no-odd
		if(sum%2!=0 && (s[n-1]-'0')%2!=0){
			int index;
			for (int i = 0; i < n-1; ++i)
			{
				if(sum-(s[i]-'0')%2==0){
					index = i;
					continue;
				}
			}

			for (int i = 0; i < n; ++i)
			{
				if(i!=index){
					cout<<s[i];
				}
			}
			cout<<endl;
		}

		//sum-odd ..no-even
		if(sum%2!=0 && (s[n-1]-'0')%2==0){
			int i=1;
			while((s[n-i]-'0')%2!=0&&i<n){
				//remove last
				sum -= (s[n-i]-'0');
				i++;
			}
			if(i==n){
				cout<<"-1"<<endl;
				continue;
			}
			
			
			cout<<endl;
		}




	}
}


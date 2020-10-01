#include <bits/stdc++.h>
using namespace std;

#define int long long int
int mod = 1000000001;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	int c = 0;
	cin>>t; while(t--){

		c++;
		
		string s;
		cin>>s;

		map<char,int> grid;
		grid['N'] = 0;
		grid['S'] = 0;
		grid['E'] = 0;
		grid['W'] = 0;


		stack<int> num;
		stack<char> characters;

		int mult = 1;
		for(int i=0;i<s.size();i++){
			
			char ch = s[i];
			if(isdigit(ch)){
				num.push(ch-'0');
				mult *= (ch-'0');
			}else if(ch=='('){
				characters.push(ch);
			}else if(ch==')'){
				
				while(characters.top()!='('){
					char t = characters.top();
					grid[t] = (grid[t]%mod + mult%mod)%mod;
					characters.pop();
				}
				characters.pop();
				mult /= num.top();
				num.pop();
			}else{
				characters.push(ch);
			}
		}
		while(!characters.empty()){
			char x = characters.top();
			//cout<<x;
			grid[x] = (grid[x]+1)%mod;
			characters.pop();
		}

		int x,y;

		y = ((grid['S']%mod)-(grid['N']%mod)+1)%mod;
		x = ((grid['E']%mod)-(grid['W']%mod)+1)%mod;

		if(x<=0){
			x = 1000000000+x;
		}

		if(y<=0){
			y = 1000000000 +y;
		}

		cout<<"Case #"<<c<<": "<<x<<" "<<y<<"\n";

	}

}



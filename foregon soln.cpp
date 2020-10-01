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

	int t;
	int N;
	int count = 0;
	cin>>t; while(t--){
		count++;
		cin>>N;
		
		string n = to_string(N);
	
		cout<<"Case #"<<count<<": ";
		string a,b;
		bool flag = false;
		

        for(int i=0;i<n.size();i++){
            if(n[i]=='4'){
                a.append("3");
                b.append("1");
                flag = true;
            }else{
                a += n[i];
                if(flag == true) b+="0";
            }
        }
		cout<<a<<" "<<b<<endl;
	}
}


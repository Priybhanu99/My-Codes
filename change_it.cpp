#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t,n;
	cin>>t; while(t--){

		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		map<int,int> map;
		for (int i = 0; i < n; ++i)
		{
			map[a[i]]++;
		}

        for(int i=0;i<n;i++){
            cout<<a[i]<<"->"<<map[a[i]]<<endl;
        }

		bool same = true;
        for(int i=1;i<n;i++){
            if(map[a[i]]!=map[a[i-1]]){
                same = false;
                break;
            }
        }

        cout<<"same "<<same<<endl;

		int max = -1;
		for (int i = 0; i < n; ++i)
		{
			if(map[a[i]]>max){
				max = map[a[i]];
			}
		}

        cout<<"max :"<<max<<endl;

		int ans=0;

		//if all elements are same
		if(same==true){
			ans = (map.size()-1)*max;
		}
		else{
             //map<int, int>::iterator itr; 
            // for (itr = map.begin(); itr != map.end(); ++itr) { 
            //     if(itr->second!=max){
            //         ans += itr->second;
            //     }
            // } 

            for(auto i:map){
                if(i.second!=max){
                    ans += i.second;
                }
            }

		}

		cout<<ans<<endl;
	}
}


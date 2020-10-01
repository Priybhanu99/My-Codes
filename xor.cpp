#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    
    for(int y = 0;y<t;y++){
        int n;
        cin>>n;
        int a,b;
        cin>>a>>b;

        int q;
        cin>>q;

        for(int l=0;l<q;l++){
            int x;
            cin>>x;

            int ans = 0;
            if(n%3==0){
                ans = 0;
            }else if(n%3==1){
                ans = a;
            }else{
                ans = a^b;
            }

            int myans = ans;

            myans^ = (x%3==0)?(a^b):(a);
            if(x%3 !=0 && x%3!=1){
                myans = b;
            }

            cout<<myans<<"\n";



            
        }
        


    }
}
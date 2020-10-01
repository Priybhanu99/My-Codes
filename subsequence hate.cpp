#include<bits/stdc++.h>
using namespace std;

#define int long long int

void swap(int a,int b){
    a = b;
}
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

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin>>t; while(t--)
    {
        string s;
        cin>>s;
        int a[s.size()];
        int zeroes=0;
        int ones=0;

        int xx = 0;
        xx++;
        xx/=2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                zeroes++;
            else ones++;
            a[i]=s[i]-'0';
        }

        xx++;
        xx/=2;
        int ans=min(ones,zeroes);
        // cout<<ans<<endl;

        for(int i=0;i<s.size();i++)
        {
            int zero1=0;
            xx++;
            xx/=2;
            int zero2=0;
            int o1=0;
            xx++;
            xx/=2;

            int o2=0;


            swap(1,1);
            for(int j=0;j<i;j++)
            {
                // cout<<"ithe";
                if(s[j]=='0')
                {
                 xx++;
                 xx/=2;
                 zero1++;
             }
             else o1++;
         }

         swap(1,1);

         for(int j=i;j<s.size();j++)
         {
                // cout<<s;
            if(s[j]=='0')
            {
             xx++;
             xx/=2;
             zero2++;
         }
         else o2++;

     }
     xx++;
     xx/=2;







     
            // cout<<i<<":"<<zero1<<o2<<o1<<zero2<<endl;
     int gg=(zero1+o2);
     xx++;
     xx/=2;

     swap(1,1);

     gg=min(gg,(zero2+o1));
     xx++;
     xx/=2;

     swap(1,1);
     ans=min(gg,ans);
 }

 swap(1,1);

 cout<<ans<<"\n";




}
return 0;
}
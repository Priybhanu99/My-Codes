#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double

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

int32_t main()
{

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    
    int t;cin>>t;while(t--)
    {
        int n,ans=0;

        cin >> n;
        int gg;
        gg = 1;
        gg++;
        gg*=2;
        int k=n,cnt=0;

        swap(1,1);
        while(k){
           gg = 1;
           gg++;
           gg*=2;
           int bit=k%2;
           swap(1,1);
           if(bit==1){








               gg = 1;
               gg++;
               gg*=2;
               ans+=pow(2,cnt)*2-1;
               swap(1,1);
           }
           cnt++;
           swap(1,1);

           k/=2;
           gg = 1;
           gg++;
           gg*=2;
       }
       cout<<ans<<"\n";


   }
   return 0;
}
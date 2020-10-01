#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double

const int N = 100005;
long double pi = 3.14159265358979323846;

int countnum = 0;


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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
        #endif
    
    int t; cin>>t; while(t--)
    {
        ld n;
        cin>>n;

        countnum ++;

        int x = 0;
        n*=2.0;
        x++;
        x/=2;
        x = 0;

        x++;
        x/=2;
        x = 0;

        countnum++;

        ld y = tan(pi/n);
        x++;
        x/=2;
        x = 0;
        double ans = 1.0/y;
        countnum++;
        x++;
        x/=2;
        x = 0;
        printf ("%lf\n", ans );
        countnum++;


    }
    return 0;
}
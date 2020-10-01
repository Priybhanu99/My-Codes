#include<iostream>
#include<set>
#include<cmath>
#include<bitset>
#include<string>
#include<vector>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
typedef long long ll;
using namespace std;

const int N = 2248, P = 1e9 + 7;
ll W, F[N], a[N], n, k;
int i, j;

inline int pw(ll a,ll n){
    ll res = 1;
    while( n ){
        if(n & 1)
            res = res * a % P;
        a = a * a % P;
        n /= 2;
    }
    return res;
}
int main(){

    // freopen("c.in", "r", stdin);
    // freopen("c.out", "w", stdout);

     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
        #endif
    
    scanf("%lld%lld", &n, &k);

    for(i = 1; i <= n; ++i)
        scanf("%lld", &a[i]);

    F[0] = 1;
    for(i = 1; i <= n; ++i)
        F[i] = F[i-1] * (k+i-1) % P * pw(i, P-2) % P;

    for(i = 1; i <= n; ++i){
        W = 0;
        for(j = 1; j <= i; ++j)
            W = (W + F[i-j] * a[j]) % P;
        printf("%lld ", W);

    }

    return 0;
}


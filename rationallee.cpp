#include <bits/stdc++.h>
#define maxn 100
#define ll long long
#define pp pair<int, int>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define inputfile freopen(input.txt, r, stdin)
#define outputfile freopen(out.txt, w, stdout)
#define int ll
using namespace std;
int32_t main()
{

    
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
        #endif
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        ll n, m, gifts[maxn], friends[maxn];
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            cin >> gifts[i];
        for (int i = 1; i <= m; i++)
            cin >> friends[i];
        sort(gifts + 1, gifts + 1 + n);
        sort(friends + 1, friends + 1 + m);
        int left = 1, right = n, res = 0;
        for (int i = m; i >= 1; i--)
        {
            res += gifts[right];
            friends[i]--;
            if (friends[i] == 0)
                res += gifts[right];
            else
                res += gifts[left];
            right--;
            left += friends[i];
        }
        cout << res << endl;
    }
}
#include <iostream>

#define endl '\n'

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s(10, 'a');
    cout << s << endl;

    for (int i = 0; i < n; ++i)
    {
        int u;
        cin >> u;
        s[u] = s[u] == 'a' ? 'b' : 'a';
        cout << s << endl;
    }
    cout<<endl;
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
        #endif

    int t;
    cin >> t;


    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}
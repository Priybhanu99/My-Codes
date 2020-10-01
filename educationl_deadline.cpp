#include<bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	int tt = clock();
#endif
	
	int T; cin >> T;
	while(T--) {
		int n, d;
		cin >> n >> d;
		
		int x, MAG = (int)sqrt(d) + 10;
		for(x = 0; x < MAG; x++) {
			if(x + (d + x) / (x + 1) <= n)
				break;
		}
		cout << (x < MAG ? "YES" : "NO") << endl;
	}

	return 0;
}
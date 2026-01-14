#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define endl '\n'

void solve() {
    ll s, k, m;
    cin >> s >> k >> m;

    ll f = m / k;
    ll tm = m % k;

    if (k >= s) {
        cout << max(0LL, s - tm) << endl;
    } else {
        if (f == 0) {
            cout << s - tm << endl;
        } else if (f % 2 == 1) {
            cout << max(0LL, k - tm) << endl;
        } else {
            cout << max(0LL, s - tm) << endl;
        }
    }
}

int main() {
    fast_io;

    #ifdef LOCAL
        // FILE* arquivo = fopen("input.txt", "r");
        
        // if (arquivo) {
        //     fclose(arquivo);
        //     freopen("input.txt", "r", stdin);
        // }

        // // output em arquivo
        // //freopen("output.txt", "w", stdout);
    #endif

    int t;
    if(cin >> t){
        while(t--) {
            solve();
        }

        //solve();
    }
    return 0;
}
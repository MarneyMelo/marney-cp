#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define endl '\n'

void solve() {
    ll x, k;
    cin>>x>>k;

    // 1. CHECAGEM INICIAL (ESSENCIAL)
    if (x == k) {
        cout << 0 << endl;
        return;
    }

    ll a = x, b = x;
    ll i = 0;
    bool chega = false;

    while (i < 64) {
        i++;
        
        a /= 2;
        b = (b + 1) / 2;

        if (a == k || b == k) {
            cout << i << endl;
            chega = true;
            break;
        }

        if (a < k && b < k) break;
    }

    if (!chega) cout << -1 << endl;
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
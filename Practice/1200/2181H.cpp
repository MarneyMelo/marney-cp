#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define endl '\n'

void solve() {

}

int main() {
    fast_io;

    // #ifdef LOCAL
    //     FILE* arquivo = fopen("input.txt", "r");
        
    //     if (arquivo) {
    //         fclose(arquivo);
    //         freopen("input.txt", "r", stdin);
    //     }

    //     // output em arquivo
    //     //freopen("output.txt", "w", stdout);
    // #endif

    // int t;
    // if(cin >> t){
    //     while(t--) {
    //         solve();
    //     }

    //     solve();
    // }

    // solve();

    ll w, h, d;
    cin >> w >> h >> d;

    ll n;
    cin >> n;

    vector<ll> divs;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divs.push_back(i);
            if (i * i != n) divs.push_back(n / i);
        }
    }

    for (ll a : divs) {
        if (w % a != 0) continue;
        for (ll b : divs) {
            if (h % b != 0) continue;
            if (a * b > n) continue;
            if (n % (a * b) != 0) continue;

            ll c = n / (a * b);
            if (d % c != 0) continue;

            cout << a - 1 << " " << b - 1 << " " << c - 1 << "\n";
            return 0;       
        }
    }

    cout << -1 << "\n";
}

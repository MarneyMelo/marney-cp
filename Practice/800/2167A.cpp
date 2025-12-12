// SOLVED -- TRIVIAL

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define endl '\n'

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a == b && b == c && c == d && a > 0) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
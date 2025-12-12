// SOLVED -- TRIVIAL

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    bool tem_par = false;
    bool tem_impar = false;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) tem_par = true;
        else tem_impar = true;
    }
    if (tem_par && tem_impar) {
        sort(a.begin(), a.end());
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
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
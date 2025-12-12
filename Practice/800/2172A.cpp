// SOLVED -- TRIVIAL

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define endl '\n'

void solve() {
    int a[3];
    for(int i = 0; i<3; i++){
        cin>>a[i];
    }

    sort(a, a+3);

    if ((a[2] - a[0]) >= 10){
        cout<< "check again";
    } else {
        cout<< "final " << a[1];
    }
    
}

int main() {
    /*fast_io;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }*/
   solve();

    return 0;
}
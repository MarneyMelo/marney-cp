#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }

    if (!v.empty()) {
        auto it = max_element(v.begin(), v.end());
        v.erase(it);
    }

    int soma = 0;
    int *p = &soma;
    for(int i = 0; i < n - 2; i++){
        *p = *p + abs(v[i] - v[i+1]);
    }

    cout<<soma<<endl;
}
    

int main() {
    fast_io;

    #ifdef LOCAL
        FILE* arquivo = fopen("input.txt", "r");
        
        if (arquivo) {
            fclose(arquivo);
            freopen("input.txt", "r", stdin);
        }

        // output em arquivo
        //freopen("output.txt", "w", stdout);
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
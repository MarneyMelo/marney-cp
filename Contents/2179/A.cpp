#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define endl '\n'

void solve() {
    int k, x;
    cin>>k>>x;
    cout<<(k*x+1)<<endl;
}

int main() {
    fast_io;


    #ifdef LOCAL
        FILE* arquivo = fopen("inpuut.txt", "r");
        
        if (arquivo) {
            fclose(arquivo);
            freopen("inpuut.txt", "r", stdin);
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
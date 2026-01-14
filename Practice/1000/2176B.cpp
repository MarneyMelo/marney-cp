#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool temzero = false;

    for(int i = 0; i<n; i++){
        if(s[i] == '0') temzero = true;
    }

    if(!temzero){
        cout<<0<<endl;        
    } else {
        int start = 0;
        while (start < n && s[start] == '0') {
            start++;
        }
        int maxZero = 0;
        int curZero = 0;
        for (int i = 0; i < n; i++) {
                int idx = (start + i) % n;
                if (s[idx] == '0') {
                    curZero++;
                    maxZero = max(maxZero, curZero);
                } else {
                    curZero = 0;
                }
            }
        cout << maxZero << "\n";
    }
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
        freopen("output.txt", "w", stdout);
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
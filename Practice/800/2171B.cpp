#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i = 0; i<n; i++){
        cin>>vec[i];
        if(vec[i] == -1 && i!= 0 && i != n-1){ vec[i] = 0;}
    }

    if(vec[0] == -1 && vec[n-1] == -1){
        vec[0] = 0;
        vec[n-1] = vec[0];
    } 

    if(vec[n-1] == -1 && vec[0] != -1) vec[n-1] = vec[0];

    if(vec[n-1] != -1 && vec[0] == -1) vec[0] = vec[n-1];

    cout << abs(vec[n-1] - vec[0]) << "\n";
    for(int i = 0; i < n; i++){
        cout << vec[i] << (i == n-1 ? "" : " ");
    }
    cout << "\n";

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
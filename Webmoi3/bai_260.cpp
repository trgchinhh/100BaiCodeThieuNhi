#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ___TruongChinh304___ signed main()
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

using ll = long long;
using namespace std;

const int C_MAX = 1e5, C_MIN = -1e5, c_INF = 1e9;

void c_solve(void){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] = abs(a[i]);
        int sum = 0;
        for(int j = 1; j <= a[i]; j++){
            if(a[i] % j == 0){
                sum += j;
            }
        }
        cout << sum << " ";
    }
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}
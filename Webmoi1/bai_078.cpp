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
    int n, m; cin >> n >> m;
    float sum5 = 0, sum = 0, cnt = 0;
    for(int i = n; i <= m; i++){
        if(i % 5 == 0){
            sum5 += i;
        }
        if(i % 2 == 0 && i % 3 == 0){
            sum += i;
            cnt ++;
        }
    }
    cout << sum5 << " ";
    float tbc = sum / cnt;
    if(!cnt){
        cout << "0.0" << endl;
    } else {
        cout << fixed << setprecision(1) << (float)tbc << endl; 
    }
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}
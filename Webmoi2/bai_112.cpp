#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ___TruongChinh304___ signed main()
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

using ll = long long;
using namespace std;

const int C_MAX = 1e5, C_MIN = -1e5, c_INF = 1e9;

bool snt(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int sum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool is_smith(int n) {
    if (snt(n)) return false;  
    int sum_n = sum(n);
    int sum_factors = 0;
    int original = n;

    for (int i = 2; i*i <= n; ++i) {
        while (n % i == 0) {
            sum_factors += sum(i);
            n /= i;
        }
    }
    if (n > 1) sum_factors += sum(n); 
    return sum_n == sum_factors;
}

void c_solve(void){
    int n; cin >> n;
    if (is_smith(n)) cout << "Yes\n";
    else cout << "No\n";
}

___TruongChinh304___ {
    fast_io;
    
    c_solve();

    cerr << "Time: " << TIME << " s.\n";
    return 0;
}
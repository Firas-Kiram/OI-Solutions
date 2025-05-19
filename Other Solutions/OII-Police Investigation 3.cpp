#include <bits/stdc++.h>
using namespace std;
 
#define all(c) begin(c), end(c)
#define pb push_back
 
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll T = 1;
    // cin >> T;
    while(T --) {
        ll n; cin >> n;
        ll dp[n + 1][2] , a[n];
        for(int i = 0 ; i < n ; i ++) cin >> a[i];
        for(int i = 0 ; i <= n ; i ++) for(int j = 0 ; j < 2 ; j ++) dp[i][j] = 1e11;
        dp[0][0] = dp[0][1] = 0;
        for(int i = 0 ; i < n ; i ++) {
            dp[i + 1][0] = dp[i][1]; 
            dp[i + 1][1] = min(dp[i][1] + a[i] , dp[i][0] + a[i]);
        }
        cout << min(dp[n][0] , dp[n][1]);

    }
    return 0;
}

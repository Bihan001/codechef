// Author: Bihan Chakraborty
// Linkedin: https://www.linkedin.com/in/bihan-chakraborty
// Github: https://github.com/Bihan001

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const int MOD = 1e9 + 7;
const ll INF = 1e18;
#define inputarr(arr, n)       \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i];
#define printarr(arr, n)       \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << ' ';

void solve() {
    int a, b, a1, b1, a2, b2;
    cin >> a >> b >> a1 >> b1 >> a2 >> b2;
    if (a > b) swap(a, b);
    if (a1 > b1) swap(a1, b1);
    if (a2 > b2) swap(a2, b2);
    if (a == a1 && b == b1) {
        cout << 1 << endl;
    } else if (a == a2 && b == b2) {
        cout << 2 << endl;
    } else {
        cout << 0 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

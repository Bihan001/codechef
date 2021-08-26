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
#define inputarr(arr, n) \
    for (ll i = 0; i < n; i++) cin >> arr[i];
#define printarr(arr, n) \
    for (ll i = 0; i < n; i++) cout << arr[i] << ' ';

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    vector<vector<pll>> graph(n + 2);
    map<ll, ll> hospitals;
    for (ll i = 1; i <= k; i++) {
        ll x, y;
        cin >> x >> y;
        hospitals[x] = y;
    }
    for (ll i = 1; i <= m; i++) {
        ll a, b, d;
        cin >> a >> b >> d;
        graph[a].pb(mp(b, d));
        graph[b].pb(mp(a, d));
    }
    for (auto it : hospitals) {
        graph[n + 1].pb({it.first, it.second});
    }
    vll distance(n + 2, INF);
    queue<ll> q;
    distance[n + 1] = 0;
    q.push(n + 1);
    while (!q.empty()) {
        ll curr = q.front();
        q.pop();
        for (pll neighbour : graph[curr]) {
            ll v = neighbour.first, w = neighbour.second;
            ll newDist = distance[curr] + w;
            if (newDist < distance[v]) {
                distance[v] = newDist;
                q.push(v);
            }
        }
    }
    for (ll i = 1; i <= n; i++) {
        cout << distance[i] << ' ';
    }
    cout << endl;
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

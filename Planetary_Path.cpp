// Author: Bihan Chakraborty
// Linkedin: https://www.linkedin.com/in/bihan-chakraborty
// Github: https://github.com/Bihan001

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
const int MOD = 1e9 + 7;
const int INF = 1e18;
#define inputarr(arr, n) \
    for (int i = 0; i < n; i++) cin >> arr[i];
#define printarr(arr, n) \
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';

void solve() {
    int n, k, s;
    cin >> n >> k >> s;
    vi arr(n + 1);
    map<int, vi> alliances;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        alliances[arr[i]].pb(i);
    }
    for (auto it : alliances) {
        sort(all(it.second));
    }
    vector<vector<pii>> graph(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            int cost;
            cin >> cost;
            if (cost == -1 || arr[i] == j) continue;
            // cost from planet i to all planets of alliance j
            if (!alliances[j].empty()) graph[i].pb(mp(alliances[j][0], cost));
        }
    }
    for (auto it : alliances) {
        vi friends = it.second;
        if (friends.size() < 2) continue;
        for (int i = 1; i < friends.size(); i++) {
            graph[friends[i]].pb(mp(friends[i - 1], 0));
            graph[friends[i - 1]].pb(mp(friends[i], 0));
        }
    }
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 0; j < graph[i].size(); j++) {
    //         cout << i << ' ' << graph[i][j].first << ' ' << graph[i][j].second << endl;
    //     }
    //     cout << endl;
    // }

    vi distance(n + 1, LONG_LONG_MAX);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    distance[s] = 0;
    pq.push(mp(0, s));
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        for (int i = 0; i < graph[u].size(); i++) {
            int v = graph[u][i].first, w = graph[u][i].second;
            int newDist = distance[u] + w;
            if (newDist < distance[v]) {
                distance[v] = newDist;
                pq.push(mp(distance[v], v));
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (distance[i] >= LONG_LONG_MAX)
            cout << -1 << ' ';
        else
            cout << distance[i] << ' ';
    }
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

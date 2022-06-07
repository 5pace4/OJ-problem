#include<bits/stdc++.h>

using namespace std;
#define int long long
const int N = 1e5 + 7;
int n, m, ans = 0;
vector<int>adj[N], a(N);
void dfs(int u, int p, int curr, int mx) {
	if(a[u])curr++;
	else curr = 0;
	mx = max(curr,mx);
	int child = 0;
	for(int v : adj[u]) {
		if(v != p) {
			dfs(v, u, curr, mx);
			child++;
		}
	}
	if(child == 0 and mx <= m)ans++;
}
void f() {
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v; 
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1, 0, 0, 0);
	cout << ans << '\n';
}
int32_t main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	f();
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
void solve(){
    int n;
    cin>>n;
    int v[n+1];
    for (int i=1;i<=n;i++)cin>>v[i];
    vector<int> g[n+1];
    for (int i=1;i<=n;i++) {
        g[v[i]].push_back((v[v[i]]));
    }
    bool vis[n+1];
    memset(vis,0,sizeof(vis));
    function<void(int)> dfs=[&](int start) {
        vis[start]=1;
        for (int i:g[start]) {
            if (!vis[i])dfs(i);
        }
    };
    int cnt=0;
    for (int i=1;i<=n;i++) {
        if (!vis[i]) {
            dfs(i);
            cnt++;
        }
    }
    cout<<((n-cnt)%3==0 ? "Petr":"Um_nik");
}
signed main() {
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    if (testcases)cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
}
#include<bits/stdc++.h>
using namespace std;
//#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
const int MOD=1e9;
vector<int> v;
vector<int> g[200005];
bool vis[200005];
void dfs(int start) {
    vis[start]=1;
    v.push_back(start);
    for (int i:g[start]) {
        if (vis[i])continue;
        vis[i]=1;
        dfs(i);
        v.push_back(start);
    }
}
void solve(){
    int n;
    cin>>n;
    for (int i=1;i<n;i++) {
        int l,r;
        cin>>l>>r;
        g[l].push_back(r);
        g[r].push_back(l);
    }
    for (int i=1;i<=n;i++)sort(all(g[i]));
    dfs(1);
    for (int i:v)cout<<i<<' ';
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
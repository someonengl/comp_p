#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
const int MOD=1e9;
vector<int> ans;
vector<int> g[200005];
bool vis[200005];
bool flag=1;
int par[200005];
void dfs(int start,int p) {
    par[start]=p;
    vis[start]=1;
    ans.push_back(start);
    vector<int> adj;
    for (int i:g[start]) {
        if (!vis[i]) {
            adj.push_back(i);
        }
    }
    if (start==1) {
        if (flag)flag=0;
        else if (adj.size()==0) {
            for (int i:ans) {
                cout<<i<<' ';
            }
            exit(0);
        }
        else dfs(p,p[par]);
    }
    sort(all(adj));
    for (int i:adj)dfs(i,start);
}
void solve(){
    int n;
    cin>>n;
    memset(par,-1,sizeof(par));
    for (int i=1;i<n;i++) {
        int l,r;
        cin>>l>>r;
        g[l].push_back(r);
        g[r].push_back(l);
    }
    dfs(1,-1);
    for (int i:ans)cout<<i<<' ';
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
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
const int MOD=1e9;
int pref[1000010];
void solve(){
    int n,m;
    cin>>n>>m;
    int vis[m+1];
    memset(vis,0,sizeof(vis));
    for (int i=1;i<=n;i++) {
        int x;
        cin>>x;
        vis[x]=1;
    }
    int ans=0;
    for (int i=1;i<m;i++) {
        if (!(vis[i] or vis[i+1] or vis[i-1]))ans++;
    }
    cout<<ans<<endl;
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
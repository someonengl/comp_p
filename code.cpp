#include<bits/stdc++.h>
using namespace std;
//#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
const int MOD=1e9;
void solve(){
    int x;
    cin>>x;
    int cnt[x+1];
    memset(cnt,0,sizeof(cnt));
    int n;
    cin>>n;
    int v[n+1];
    for (int i=1;i<=n;i++){cin>>v[i];v[i]%=x;}
    int m;
    cin>>m;
    for (int i=1;i<=m;i++) {
        int h;
        cin>>h;
        cnt[h%x]++;
    }
    int ans=0;
    for (int i=1;i<=n;i++) {
        cout<<cnt[x-v[i]]<<' '<<v[i]<<' '<<x-v[i]<<endl;
        ans+=cnt[x-v[i]];
    }
    cout<<ans;
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
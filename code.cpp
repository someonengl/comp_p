#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
const int MOD=1e9;
int pref[1000000+10];
int ans[1000000+10];
void solve(){
    int n,k;
    cin>>n>>k;
    if (n<k) {
        cout<<1;
        return;
    }
    pref[0]=1;
    for (int i=1;i<k;i++) {
        ans[i]=1;
        pref[i]=pref[i-1]+ans[i];
    }
    for (int i=k;i<=n;i++) {
        ans[i]=(pref[i-1]-(i==k?0ll:pref[i-k-1])+MOD)%MOD;
        pref[i]=(pref[i-1]+ans[i])%MOD;
    }
    cout<<ans[n]<<endl;
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
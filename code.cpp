#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
const int MOD=1e9;
void solve(){
    int n,m;
    cin>>n>>m;
    int v[n+1];
    for (int i=1;i<=n;i++)cin>>v[i];
    set<int> st;
    for (int i=1;i<=n;i++) {
        for (int j=2;j*j<=v[i];j++) {
            if (v[i]%j==0) {
                st.insert(j);
                st.insert(v[i]/j);
            }
        }
        if (v[i]>1)st.insert(v[i]);
    }
    vector<int> ans;
    for (int i=1;i<=m;i++) {
        bool flag=1;
        flag&=(!st.count(i));
        for (int j=2;j*j<=i;j++) {
            if (i%j==0) {
                if (st.count(j) or st.count(i/j)){flag=0;break;}
            }
        }
        if (flag)ans.push_back(i);
    }
    cout<<ans.size()<<endl;
    for (int i:ans)cout<<i<<endl;
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
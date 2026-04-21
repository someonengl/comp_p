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
    set<array<int,2>> st;
    for (int i=1;i<m;i++)st.insert({i,i+1});
    for (int i=1;i<=n;i++) {
        int x;
        cin>>x;
        if (st.count({x,x+1}))st.erase(st.find({x,x+1}));
        if (st.count({x-1,x}))st.erase(st.find({x-1,x}));
    }
    cout<<st.size()<<endl;
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
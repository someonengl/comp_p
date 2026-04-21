#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
const int MOD=1e9;
map<int,array<int,2>>mp;
void solve(){
    int h,w,n;
    cin>>h>>w>>n;
    vector<array<int,2>> v[2];
    for (int i=1;i<=n;i++) {
        int l,r;
        cin>>l>>r;
        v[0].push_back({l,i});
        v[1].push_back({r,i});
    }
    sort(all(v[0]));
    sort(all(v[1]));
    for (int f=0;f<2;f++) {
        int c=1;
        for (auto& [num,ind]:v[f]) {
            num=c++;
        }
    }
    for (int f=0;f<2;f++) {
        for (auto& [num,ind]:v[f]) {
            mp[ind][f]=num;
        }
    }
    for (int i=1;i<=n;i++)cout<<mp[i][0]<<' '<<mp[i][1]<<endl;
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
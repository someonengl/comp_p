#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
const int MOD=1e9;
int vis[1000001];
vector<int> v;
void solve(){
    int n;
    cin>>n;
    cout<<*(--upper_bound(all(v),n))<<endl;
}
signed main() {
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i=2;i<=1e6;i++) {
        if (vis[i]==0) {
            for (int j=i+i;j<=1e6;j++) {
                vis[j]++;
            }
        }
    }
    for (int i=1;i<=1e6;i++) {
        if (vis[i]==2)v.push_back(i*i);
    }
    int t=1;
    if (testcases)cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
}
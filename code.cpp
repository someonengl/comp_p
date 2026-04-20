#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=1;
const int MOD=1e9;
int vis[1000001];
vector<int> v;
void solve(){
    int n;
    cin>>n;
    cout<<((int)sqrtl(n/2))+((int)sqrtl(n/4))<<endl;
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
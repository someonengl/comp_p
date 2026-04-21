#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
void solve(){
    vector<int> v;
    for (int i=1;i<=1e12;i*=3) {
        for (int j=1;j<=1e12;j*=5) {
            if (i==1 and j==1)continue;
            if (i*j>1e12)break;
            v.push_back(i*j);
        }
    }
    sort(all(v));
    int n;
    cin>>n;
    cout<<v[n-1]<<endl;
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
#include<bits/stdc++.h>
using namespace std;
#define int long long
//#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=1;
void solve(){
    int n,m;
    cin>>n>>m;
    cout<<m+n/2<<endl;
    int ans[n+1][m+1];
    memset(ans,0,sizeof(ans));
    for (int i=1;i<=n/2-1+n%2;i++) {
        for (int j=1;j<=(m+1)/2-1+m%2;j++) {
            ans[i][j]=1;
        }
    }
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            cout<<(ans[i][j]?'+':'-');
        }
        cout<<endl;
    }
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
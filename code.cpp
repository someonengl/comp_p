#include<bits/stdc++.h>
using namespace std;
#define int long long
//#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=1;
void solve() {
    int n,m;
    cin>>n>>m;
    bool flag=0;
    if (n>m) {
        swap(n,m);
        flag=1;
    }
    int cc[m+1],cr[n+1];
    memset(cc,0,sizeof(cc));
    memset(cr,0,sizeof(cr));
    vector<vector<char>> v(n+1,vector<char>(m+1,'-'));
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            if (cc[j]<(n-1)/2 and cr[i]<(m/2+1)) {
                v[i][j]='+';
                cc[j]++;
                cr[i]++;
            }
            cout<<v[i][j];
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
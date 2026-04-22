#include<bits/stdc++.h>
using namespace std;
#define int long long
//#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=1;
void solve(){
    int n,m;
    cin>>n>>m;
    int v[n+1][m+1];
    memset(v,0,sizeof(v));
    for (int i=1;i<=n/2-1+n%2;i++) {
        for (int j=1;j<=(m+1)/2+1-m%2;j++) {
            v[i][j]=1;
        }
    }
    int A=0,B=0;
    for (int i=1;i<=n;i++) {
        int c1=0,c2=0;
        for (int u=1;u<=m;u++) {
            if (v[i][u]==1)c1++;
            else c2++;
        }
        if (c1>c2)B++;
    }
    for (int u=1;u<=m;u++) {
        int c1=0,c2=0;
        for (int i=1;i<=n;i++) {
            if (v[i][u]==1)c1++;
            else c2++;
        }
        if (c2>c1)A++;
    }
    cout<<A+B<<endl;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            cout<<(v[i][j]?'+':'-');
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
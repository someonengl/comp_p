#include<bits/stdc++.h>
using namespace std;
#define int long long
//#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
int n,m;
int calc(vector<vector<char>>& v) { // c1 red c2 blue
    int A=0,B=0;
    int a=n,b=m;
    for (int i=1;i<=a;i++) {
        int c1=0,c2=0;
        for (int u=1;u<=b;u++) {
            if (v[i][u]=='+')c1++;
            else c2++;
        }
        if (c1>c2)B++;
    }
    for (int u=1;u<=b;u++) {
        int c1=0,c2=0;
        for (int i=1;i<=a;i++) {
            if (v[i][u]=='+')c1++;
            else c2++;
        }
        if (c2>c1)A++;
    }
    return A+B;
}
void solve() {
    cin>>n>>m;
    bool flag=0;
    vector<vector<char>> ans(n+1,vector<char>(m+1,'-'));
    for (int i=1;i<=(n-1)/2;i++) {
        for (int j=1;j<=(m+1)/2+1;j++) {
            ans[i][j]='+';
        }
    }
    cout<<calc(ans)<<endl;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            cout<<ans[i][j];
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
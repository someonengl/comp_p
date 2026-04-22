#include<bits/stdc++.h>
using namespace std;
#define int long long
//#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
void solve(){
    int n;
    cin>>n;
    int ls=0,sum=0;
    int ans=0;
    int v[n+1];
    for (int i=1;i<=n;i++) {
        cin>>v[i];
        sum+=v[i];
        if (sum>=ls) {
            ls=sum;
            ans++;
            sum=0;
        }
    }
    cout<<ans<<endl;
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
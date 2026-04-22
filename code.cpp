#include<bits/stdc++.h>
using namespace std;
#define int long long
//#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
void solve() {
    int n;
    cin>>n;
    int v[n];
    int ans=0;
    for (int i=0;i<n;i++)cin>>v[i];
    for (int mask=0;mask<(1<<n);mask++) {
        int temp=0;
        int sum=0,ls=0;
        for (int i=0;i<=n;i++) {
            sum+=v[i];
            if ((mask>>i)&1) {
                if (ls>sum) {
                    temp=-999999999;
                    break;
                }
                temp++;
                ls=sum;
                sum=0;
            }
        }
        ans=max(ans,temp);
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
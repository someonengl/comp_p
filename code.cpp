#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
const int MOD=1e9;
int pref[1000010];
void solve(){
    int n;
    cin>>n;
    int ans=0;
    for (int mask=0;mask<(1<<n);mask++) {
        if (__builtin_popcount(mask)!=n/2) {
            continue;
        }
        int sum1=0,sum2=0;
        for (int i=0;i<n;i++) {
            if ((mask>>i)&1) {
                sum1+=i+1;
            }
            else sum2+=i+1;
        }
        if (abs(sum1-sum2)%11==0)ans++;
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
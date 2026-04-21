#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
void solve(){
    int n,t;
    cin>>n>>t;
    int v[n];
    for (int i=0;i<n;i++)cin>>v[i];
    int n1=n/2;
    int n2=n-n1;
    multiset<int> mst1,mst2;
    for (int mask=0;mask<(1<<n1);mask++) {
        int sum=0;
        for (int i=0;i<n1;i++) {
            if ((mask>>i)&1)sum+=v[i];
        }
        mst1.insert(sum);
    }
    for (int mask=0;mask<(1<<n2);mask++) {
        int sum=0;
        for (int i=0;i<n2;i++) {
            if ((mask>>i)&1)sum+=v[i+n1];
        }
        mst2.insert(sum);
    }
    int ans=mst1.count(t)+mst2.count(t);
    for (int i:mst1) {
        ans+=mst2.count(t-i);
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
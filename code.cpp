#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
const int MOD=1e9;
string s;
vector<string> v;
void func(string& s,int l,int r) {
    if (l==r) {
        v.push_back(s);
    }
    else {
        for (int i=l;i<=r;i++) {
            swap(s[i],s[l]);
            func(s,l+1,r);
            swap(s[i],s[l]);
        }
    }
}
void solve(){
    cin>>s;
    int n;
    cin>>n;
    func(s,0,s.size()-1);
    sort(all(v));
    for (string sc:v)cout<<sc<<endl;
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
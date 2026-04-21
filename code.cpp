#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
bool testcases=0;
const int MOD=1e9;
string s;
vector<string> v;
void func(string& sc) {
    if (sc.size()==s.size()) {
        v.push_back(sc);
        return;
    }
    for (int i=0;i<s.size();i++) {
        sc.push_back(s[i]);
        func(sc);
        sc.pop_back();
    }
}
void solve(){
    cin>>s;
    int n;
    cin>>n;
    vector<char> vc;
    string sc="";
    func(sc);
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
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvl;
#define umap unordered_map
#define uset unordered_set

#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define f first
#define s second
#define sz(x) (int)(x).size()
#define br cout << '\n'

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

#define inp(x) int x; cin >> x;
#define inpl(x) ll x; cin >> x;
#define inp2(x,y) int x,y; cin>>x>>y;
#define inp2l(x,y) ll x,y; cin>>x>>y;
#define inp3(x,y,z) int x,y,z; cin>>x>>y>>z;
#define inp3l(x,y,z) ll x,y,z; cin>>x>>y>>z;
#define inparr(arr, n) vi arr(n); for0(i, n) cin >> arr[i];
#define inplarr(arr, n) vl arr(n); for0(i, n) cin >> arr[i];
#define inpstr(s) string s; cin >> s;
#define out(x) cout << (x);
#define outln(x) cout << (x) << '\n';
#define print(arr) for (auto &x : arr) cout << x << ' ';

void solve() {
    inp(n)
    inplarr(arr,n)
    map<ll, int> mp;
    mp[0] = -1;
    ll ans = 0;
    ll sum = 0;
    int last  = -1;
    for0(i, n){
        sum += arr[i];
        if(mp.find(sum) != mp.end()){
            if(mp[sum] >= last){
                ans++;
                last = i;
                // mp[sum] = i;
                // mp.clear();
                // sum =0 ;
            }
        }
        mp[sum] = i;
    }
    out(ans)
}

int main() {
    fastio();
    inp(t)
    while (t--) {
        solve();
        br;
    }
    return 0;
}
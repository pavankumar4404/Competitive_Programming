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
#define out(x) cout << x;
#define outln(x) cout << x << '\n';
#define print(arr) for (auto &x : arr) cout << x << ' ';

int n, l;
vector<pi> arr;
ll dp[3001][101][2];

ll solve(int len, int last, int rotated) {
    if(len == l) return 1;
    if(len > l) return 0;
    if(dp[len][last][rotated] != -1){
        return dp[len][last][rotated];
    }    
    ll cnt = 0;
    int width;
    if(rotated == 0){
        width = arr[last].s;
    }
    else{ 
        width = arr[last].f;
    }
    for(int i = 0; i < n; i++) {
        if (i == last) continue;
        if (len + arr[i].f <= l && arr[i].f == width) {
            cnt = (cnt + solve(len + arr[i].f, i, 0)) % MOD;
        }
        if (arr[i].f != arr[i].s && len + arr[i].s <= l && arr[i].s == width) {
            cnt = (cnt + solve(len + arr[i].s, i, 1)) % MOD;
        }
    }
    dp[len][last][rotated] = cnt;
    return cnt;
}

int main() {
    cin>>n>>l;
    arr.resize(n);    
    for(int i = 0; i < n; i++) {
        cin>>arr[i].f>>arr[i].s;
    }
    memset(dp, -1, sizeof(dp));
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i].f <= l) {
            ans = (ans + solve(arr[i].f, i, 0)) % MOD;
        }
        if(arr[i].f != arr[i].s && arr[i].s <= l) {
            ans = (ans + solve(arr[i].s, i, 1)) % MOD;
        }
    }
    outln(ans)
    return 0;
}

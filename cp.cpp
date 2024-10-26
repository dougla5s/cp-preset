#include <bits/stdc++.h>
using namespace std;
#define EXT_IO freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

#define all(x) ((a).begin(), (a).end())
#define BRACKET "[]"

template<typename T> ostream& operator << (ostream &op, const vector<T> &v) {cout << BRACKET[0]; for (const T& x : v) { v[v.size()-1] == x ? op << x : op << x << ", "; } cout << BRACKET[1]; return op;};
template<typename A, typename B> ostream& operator <<(ostream& op, const pair<A,B> &p) {return op << BRACKET[0] << p.first << ", " << p.second << BRACKET[1];};

typedef long double ld;
typedef long long ll;
typedef int64_t i64;

template<typename T> inline abs(T _a) {return (_a>=0 ? (_a) : -(_a));};
template<typename T> inline isz(T _x) {return int((_x).size());};

void solve() {

    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // EXT_IO // external

    int t;
    cin >> t;
    while (t--) 
        solve();
    
    return 0;
}

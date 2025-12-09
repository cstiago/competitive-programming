#include <bits/stdc++.h>

#define dbg(x) cerr << (#x) << " is " << (x) << "\n"

using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

const ll mod = 1e9+7;

struct box {
    ll x, y, z;
    int dad, qt = 1;
    box(ll x_, ll y_, ll z_, int dad_){
        x = x_; y = y_; z = z_;
        dad = dad_;
    };
};

vector<box> v;

ll p(ll n) {
    return n*n;
}

ll dist(pair<int,int> bs) {
    return p(v[bs.first].x-v[bs.second].x) + p(v[bs.first].y-v[bs.second].y) + p(v[bs.first].z-v[bs.second].z);
}

int find(int i) {
    if(v[i].dad == i) return i;

    return v[i].dad = find(v[i].dad);
}

void unite(pair<int,int> bs) {
    int ri = find(bs.first), rj = find(bs.second);

    if(ri != rj) {
        v[rj].dad = ri;
        v[ri].qt += v[rj].qt;
    }
}

void solve() {
    string s; stringstream ss;
    ll x, y, z;
    char _;
    while(getline(cin, s)) {
        ss.clear(); ss.str(s);
        ss >> x >> _ >> y >> _ >> z;

        box b(x, y, z, v.size());
        v.push_back(b);
    }
    
    auto cmp = [](pair<int,int> p1, pair<int,int> p2) {
        return dist(p1) > dist(p2);
    };

    priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(cmp)> mindist(cmp);

    for(int i = 0; i < v.size(); i++) {
        for(int j = i+1; j < v.size(); j++) {
            mindist.push({i,j});
        }
    }

    for(int i = 0; i < 1000 && !mindist.empty(); i++) {
        auto b = mindist.top();
        mindist.pop();
        unite(b);
    }

    set<int> roots;
    priority_queue<int> maxcirc;

    for(int i = 0; i < v.size(); i++) {
        roots.insert(find(i));
    }

    for(auto i : roots) {
        maxcirc.push(v[i].qt);
    }

    ll ans = 1;
    for(int i = 0; i < 3; i++) {
        auto qt = maxcirc.top();
        maxcirc.pop();
        ans *= qt;
    }

    cout << ans << "\n";
}

void io(const string& s = "") {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    if(s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("8a");
    ull t = 1;
    while(t--) {
        solve();
    }
}

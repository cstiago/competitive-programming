#include <bits/stdc++.h>
#define int long long
using namespace std;

void solution() {
    ifstream in("highcard.in");
    ofstream out("highcard.out");

    int n;
    in >> n;

    int points = 0;
    int max = 2 * n;

    vector<int> elsie, bessie;

    for(int i = 0; i < n; i++) {
        int card;
        in >> card;

        elsie.push_back(card);
    }

    sort(elsie.begin(), elsie.end());

    for(int i = 0, j = 0; i < max && j < max; i++) {
        int card = i + 1;

        if(card != elsie[j]) {
            bessie.push_back(card);
        }
        else {
            j++;
        }
    }

    for(int i = 0; i < n; i++) {
        vector<int>::reverse_iterator card = upper_bound(elsie.rbegin(), elsie.rend(), bessie[i], [](int a, int b) {
            return a > b;
        });

        if(card != elsie.rend()) {
            elsie.erase(card.base() - 1);

            points++;
        }
    }

    out << points << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    solution();

    return 0;
}

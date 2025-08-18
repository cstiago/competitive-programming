#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ifstream in("cardgame.in");
    ofstream out("cardgame.out");

    ll n;
    in >> n;

    vector<ll> elsie_high_play, elsie_low_play, elsie_cards;
    vector<ll> bessie_high_cards, bessie_low_cards;
    ll card;

    for(ll i = 0; i < n; i++) {
        in >> card;

        if(elsie_high_play.size() < n / 2) {
            elsie_high_play.push_back(card);
        }
        else {
            elsie_low_play.push_back(card);
        }
        
        elsie_cards.push_back(card);
    }

    sort(elsie_cards.begin(), elsie_cards.end());

    for(ll i = 0, j = 0; j < 2 * n; j++) {
        if(j + 1 != elsie_cards[i]) {
            if(bessie_low_cards.size() < n / 2) {
                bessie_low_cards.push_back(j + 1);
            }
            else {
                bessie_high_cards.push_back(j + 1);
            }
            
            continue;
        }

        i++;
    }

    ll points = 0;
    ll elsie_turn;

    for(ll i = 0; i < n / 2; i++) {
        elsie_turn = elsie_high_play[i];
        vector<ll>::iterator bessie_turn = upper_bound(bessie_high_cards.begin(), bessie_high_cards.end(), elsie_turn);

        if(bessie_turn != bessie_high_cards.end()) {
            points++;
        }
        else {
            bessie_turn = bessie_high_cards.begin();
        }

        bessie_high_cards.erase(bessie_turn);
    }

    for(ll i = 0; i < n / 2; i++) {
        elsie_turn = elsie_low_play[i];
        reverse_iterator<vector<ll>::iterator> bessie_turn = upper_bound(bessie_low_cards.rbegin(), bessie_low_cards.rend(), elsie_turn, greater<ll>());

        if(bessie_turn != bessie_low_cards.rend()) {
            points++;
        }
        else {
            bessie_turn = bessie_low_cards.rbegin();
        }

        bessie_low_cards.erase(next(bessie_turn).base());
    }

    out << points << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    // ll t; cin >> t; while(t--)
        solve();

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

void test_case() {
    string in;
    cin >> in;

    list<char> password;
    auto cursor = password.end();

    for(long long i = 0; i < in.size(); i++) {
        char d = in[i];

        switch (d) {
            case '-':
                if(cursor != password.end()) {
                    cursor = prev(password.erase(cursor));
                }
                break;
            case '<':
                if(cursor != password.end()) {
                    advance(cursor, -1);
                }
                break;
            case '>':
                if(next(cursor) != password.end()) {
                    advance(cursor, 1);
                }
                break;
            default:
                cursor = password.insert(next(cursor), d);
        }
    }

    for(char d : password) {
        cout << d;
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    long long t; cin >> t; while(t--)
        test_case();

  return 0;
}

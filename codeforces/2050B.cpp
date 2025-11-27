#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t) {

        int n;
        cin >> n;

        vector<long long int> v;

        for(int i = 0; i < n; i++) {
            long long int a;
            cin >> a;

            v.push_back(a);
        }

        long long int sum_even = 0;
        long long int sum_odd = 0;

        long long int size_even = 0;
        long long int size_odd = 0;

        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                sum_even += v.at(i);
            }
            else {
                sum_odd += v.at(i);
            }
        }

        if(v.size() % 2 == 0) {
            size_even = size_odd = v.size() / 2;
        }
        else {
            size_odd = (v.size() - 1) / 2;
            size_even = size_odd + 1;
        }

        bool possible = false;

        if(
            sum_even % size_even == 0 &&
            sum_odd % size_odd == 0 &&
            sum_even / size_even == sum_odd / size_odd
        ) {
            possible = true;
        }

        cout << (possible ? "YES" : "NO") << endl;

        t--;
    }

    return 0;
}

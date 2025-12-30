#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

bool is_safe(std::vector<int> v) {
    bool asc = v[0] < v[1];

    for(int i = 1; i < v.size(); i++) {
        int d = abs(v[i-1] - v[i]);

        if(
            (d < 1 || d > 3) ||
            (asc && v[i-1] > v[i]) ||
            (!asc && v[i-1] < v[i])
        ) {
            break;
        }

        if(i == v.size() - 1) {
            return true;
        }
    }

    return false;
}

int main() {

    std::ifstream in("in/02.in");
    std::ofstream out("out/02-p2.out");

    std::string line;

    unsigned long long int safe = 0;

    while(getline(in, line)) {

        std::istringstream report(line);

        std::vector<int> levels;
        int level;

        while(report >> level) {
            levels.push_back(level);
        }

        if(is_safe(levels)) {
            safe++;
        }
        else {
            for(int i = 0; i < levels.size(); i++) {
                std::vector<int> dampener = levels;
                dampener.erase(dampener.begin() + i);

                if(is_safe(dampener)) {
                    safe++;
                    break;
                }
            }
        }
    }

    out << safe << std::endl;

    return 0;
}
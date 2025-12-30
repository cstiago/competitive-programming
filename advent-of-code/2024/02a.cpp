#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

int main() {

    std::ifstream in("in/02.in");
    std::ofstream out("out/02-p1.out");

    std::string line;

    unsigned long long int safe = 0;

    while(std::getline(in, line)) {

        std::istringstream report(line);

        std::vector<int> levels;
        int level;

        while(report >> level) {
            levels.push_back(level);
        }

        bool asc = levels[0] < levels[1];

        for(int i = 1; i < levels.size(); i++) {
            int d = abs(levels[i-1] - levels[i]);

            if(
                (d < 1 || d > 3) ||
                (asc && levels[i-1] > levels[i]) ||
                (!asc && levels[i-1] < levels[i])
            ) {
                break;
            }

            if(i == levels.size() - 1)
                safe++;
        }
    }

    out << safe << std::endl;

    return 0;
}
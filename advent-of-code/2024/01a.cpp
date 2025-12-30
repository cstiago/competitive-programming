#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main() {

    std::ifstream in("in/01-p1.in");
	std::ofstream out("out/01-p1.out");

    unsigned long long int distance = 0;

    std::vector<int> left, right;
    int l, r;

    while(in >> l >> r) {
        left.push_back(l);
        right.push_back(r);
    }

    std::sort(left.begin(), left.end());
    std::sort(right.begin(), right.end());

    std::vector<int>::iterator il = left.begin();
    std::vector<int>::iterator ir = right.begin();

    for(il, ir; il < left.end() && ir < right.end(); il++, ir++) {
        distance += abs(*il - *ir);
    }

    out << distance << std::endl;
    
    return 0;
}

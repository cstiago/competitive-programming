#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main() {

    std::ifstream in("in/01-p2.in");
	std::ofstream out("out/01-p2.out");

    unsigned long long int similarity = 0;

    std::vector<int> left, right;
    int l, r;

    while(in >> l >> r) {
        left.push_back(l);
        right.push_back(r);
    }

    for(int i = 0; i < left.size() && i < right.size(); i++) {
        similarity += left[i] * count(right.begin(), right.end(), left[i]);
    }

    out << similarity << std::endl;
    
    return 0;
}

#include <iostream>
#include <fstream>
#include <map>
#include <utility>

int main() {

    std::ifstream in("in/01-p2.in");
	std::ofstream out("out/01-p2.out");

    unsigned long long int similarity = 0;

    std::map<int, std::pair<int, int>> lists;
    int l, r;

    while(in >> l >> r) {
        if(lists.contains(l)) {
            lists[l] = {lists.at(l).first + 1, lists.at(l).second};
        }
        else {
            lists.insert({l, {1, 0}});
        }

        if(lists.contains(r)) {
            lists[r] = {lists.at(r).first, lists.at(r).second + 1};
        }
        else {
            lists.insert({r, {0, 1}});
        }
    }

    std::map<int, std::pair<int, int>>::iterator i;

    for(i = lists.begin(); i != lists.end(); i++) {
        int key = i->first;
        std::pair<int, int> counts = i->second;

        similarity += key * counts.first * counts.second;
    }

    out << similarity << std::endl;
    
    return 0;
}

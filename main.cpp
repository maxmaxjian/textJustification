#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class solution {
public:
    std::vector<std::string> fullJustify(const std::vector<std::string> & words, int maxWidth) {
	std::vector<std::vector<std::string>> rows;
	for (auto it = words.begin(); it != words.end(); ) {
	    std::vector<std::string> row;
	    auto start = it;
	    row.push_back(*start);
	    ++it;
	    
	}
    }
};



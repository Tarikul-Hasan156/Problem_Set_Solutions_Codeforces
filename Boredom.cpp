#include <iostream>
#include <vector>
#include <algorithm>

bool satisfies(const std::string& digits, const std::string& pattern) {
    for (size_t i = 0; i < pattern.size(); ++i) {
        if (pattern[i] == '>' && digits[i] <= digits[i + 1])
            return false;
        if (pattern[i] == '<' && digits[i] >= digits[i + 1])
            return false;
    }
    return true;
}

int main() {
    std::string pattern = ">><<";
    std::vector<char> digits = {'0','1','2','3','4','5','6','7','8','9'};

    int n = pattern.length() + 1;
    std::sort(digits.begin(), digits.end());

    std::string smallest = "";
    std::string largest = "";

    do {
        std::string candidate(digits.begin(), digits.begin() + n);

        if (candidate[0] == '0') continue; 

        if (satisfies(candidate, pattern)) {
            if (smallest.empty()) smallest = candidate;
            largest = candidate;
        }

    } while (std::next_permutation(digits.begin(), digits.end()));

    std::cout << "Smallest: " << smallest << std::endl;
    std::cout << "Largest : " << largest << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <algorithm>

class SplitNumber {
private:
    int number;

    std::vector<int> splitNumberIntoDigits(int num) {
        std::vector<int> digits;

        if (num == 0) {
            digits.push_back(0);
            return digits;
        }

        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }

        std::reverse(digits.begin(), digits.end()); // Digits are extracted in reverse order
        return digits;
    }

public:
    SplitNumber(int num) : number(num) {}

    std::vector<int> split(int num) {
        return splitNumberIntoDigits(num);
    }
};

bool isHappyNumber(int n) {
    SplitNumber rec(n);
    std::unordered_set<int> seen;
    
    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        int sum = 0;
        std::vector<int> digits = rec.split(n);

        for (int digit : digits) {
            sum += std::pow(digit, 2);
        }

        n = sum;
    }

    return n == 1;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (isHappyNumber(n)) {
        std::cout << n << " is a Happy Number!" << std::endl;
    } else {
        std::cout << n << " is not a Happy Number." << std::endl;
    }

    return 0;
}

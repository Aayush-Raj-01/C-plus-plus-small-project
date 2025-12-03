#include <iostream>
#include <string>  // Required for std::string

int add(int num);  // Declaration for summation (e.g., 1 + 2 + ... + num)
int mul(int num);  // Declaration for product (e.g., 1 * 2 * ... + num, like factorial)

int main() {
    std::string wh;
    int num;

    std::cout << "WHAT YOU WANNA DO\nSUM OR MUL? = ";  // Updated prompt for clarity (SUM for add, MUL for mul)
    std::cin >> wh;

    std::cout << "ENTER A NUMBER: ";
    std::cin >> num;

    if (wh == "SUM") {
        std::cout << "Result: " << add(num) << std::endl;
    } else if (wh == "MUL") {
        std::cout << "Result: " << mul(num) << std::endl;
    } else {
        std::cout << "Invalid choice! Please enter SUM or MUL." << std::endl;
    }

    return 0;
}

int add(int num) {
    int d = 0;
    int i = 1;  // Initialize i to 1
    do {
        d = d + i;
        i++;
    } while (i <= num);  // Adjusted to include num in the sum
    return d;
}

int mul(int num) {
    int d = 1;
    int i = 1;  // Initialize i to 1
    do {
        d = d * i;
        i++;
    } while (i <= num);  // Adjusted to include num in the product
    return d;
}

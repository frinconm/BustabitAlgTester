#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <fstream>

const long int INITIAL_BALANCE = 10000000;

float bet(int bet, float multiplier, float result) {

    if (multiplier <= result) {
        return (bet * (multiplier - 1));
    } else {
        return 0;
    }
}

int main() {
    std::ifstream infile("C:\\Users\\frank\\CLionProjects\\BustabitAlgorithmTester\\results.txt");

    float result;

    if (!infile.is_open()) {
        std::cout << "Something got messed up\n";
        return 0;
    }

    std::string line;
    while (std::getline(infile, line))
    {
        std::istringstream iss(line);

        iss >> result;
        std::cout << result << std::endl;
        // process pair (a,b)
    }

    infile.close();

    return 0;
}

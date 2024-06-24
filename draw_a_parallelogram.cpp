#include <iostream>
#include <cmath>


int main(){
    int rows;
    int columns;
    char symbol;

    std::cout << "+------------------------------+" << std::endl;
    std::cout << "+-----Draw a parallelogram-----+" << std::endl;
    std::cout << std::endl;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns: ";
    std::cin >> columns;

    std::cout << "Symbol: ";
    std::cin >> symbol;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            std::cout << symbol << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}


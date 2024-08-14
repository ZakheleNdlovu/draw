#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int rows;
    int columns;
    char symbol;

    cout << "+------------------------------+" << endl;
    cout << "+-----Draw a parallelogram-----+" << endl;
    cout << endl;

    cout << "How many rows?: ";
    cin >> rows;

    cout << "How many columns: ";
    cin >> columns;

    cout << "Symbol: ";
    cin >> symbol;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << symbol << " ";
        }
        cout << endl;
    }

    return 0;
}


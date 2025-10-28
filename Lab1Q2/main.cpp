#include <iostream>
using namespace std;


void findOperators(string input) {


    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
            cout << "Operator: " << ch << endl;
        }
    }
}

int main() {
    string input;

    cout << "Enter an expression: ";
    cin >> input;
    cout << "Operators found:" << endl;

    findOperators(input);

    return 0;
}

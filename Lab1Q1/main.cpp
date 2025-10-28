#include <iostream>
using namespace std;

bool isNumericConstant(string input) {
    for (char ch : input) {
        if (ch < '0' || ch > '9')
            return false;
    }
    return true;
}

int main() {
    string input;

    cout << "Enter any input: ";
    cin >> input;

    if (isNumericConstant(input))
        cout << "Numeric constant" << endl;
    else
        cout << "Not numeric" << endl;

    return 0;
}



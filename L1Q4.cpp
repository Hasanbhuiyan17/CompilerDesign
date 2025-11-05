//Question 4
#include <iostream>
using namespace std;

bool isIdentifier(string s) {

    // Condition 1: First character must be letter or underscore
    if (!((s[0] >= 'A' && s[0] <= 'Z') ||
          (s[0] >= 'a' && s[0] <= 'z') ||
           s[0] == '_'))
        return false;

    // Condition 2: Next characters can be letter, digit, underscore
    for (char ch : s) {
        if (!((ch >= 'A' && ch <= 'Z') ||
              (ch >= 'a' && ch <= 'z') ||
              (ch >= '0' && ch <= '9') ||
               ch == '_'))
            return false;
    }

    return true; // Passed all checks
}

int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    if (isIdentifier(input))
        cout << "Valid Identifier" << endl;
    else
        cout << "Not an Identifier" << endl;

    return 0;
}

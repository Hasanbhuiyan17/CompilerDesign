//Question 7
#include <iostream>
using namespace std;

string fullName(string first, string last) {
    return first + " " + last;   // join first + space + last
}

int main() {
    string firstName, lastName;

    cout << "Enter first name: ";
    cin >> firstName;

    cout << "Enter last name: ";
    cin >> lastName;

    string name = fullName(firstName, lastName);
    cout << "Full Name = " << name << endl;

    return 0;
}


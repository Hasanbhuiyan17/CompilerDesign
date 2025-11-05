//Question 6
#include <iostream>
using namespace std;

void findMinMax(int arr[], int size, int &minVal, int &maxVal) {
    minVal = arr[0];
    maxVal = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];

        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter values: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minVal, maxVal;
    findMinMax(arr, n, minVal, maxVal);

    cout << "Minimum = " << minVal << endl;
    cout << "Maximum = " << maxVal << endl;

    return 0;
}


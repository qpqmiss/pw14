#include <iostream>
#include <string>

using namespace std;

void processEvenOdd(int* arr, int size) {
    int sumEven = 0, countEven = 0;
    int sumOdd = 0, countOdd = 0;

    int* ptr = arr;
    while (ptr < arr + size) {
        if (*ptr % 2 == 0) {
            sumEven += *ptr;
            countEven++;
        } else {
            sumOdd += *ptr;
            countOdd++;
        }
        ptr++;
    }

    cout << "Even avg: " << (double)sumEven / countEven << endl;
    cout << "Odd avg: " << (double)sumOdd / countOdd << endl;
}

void findMinMaxStrings(string* arr, int size) {
    string* longest = arr;
    string* shortest = arr;

    for (string* ptr = arr; ptr < arr + size; ptr++) {
        if ((*ptr).length() > (*longest).length()) {
            longest = ptr;
        }
        if ((*ptr).length() < (*shortest).length()) {
            shortest = ptr;
        }
    }

    cout << "Longest: " << *longest << " (" << (*longest).length() << ")" << endl;
    cout << "Shortest: " << *shortest << " (" << (*shortest).length() << ")" << endl;
}

void sumReverse(double* arr, int size) {
    double sum = 0;
    double* ptr = arr + size - 1;

    while (ptr >= arr) {
        cout << *ptr << " ";
        sum += *ptr;
        ptr--;
    }
    cout << endl << "Sum: " << sum << endl;
}

int main() {
    int n1;
    cin >> n1;
    int* arr1 = new int[n1];
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    processEvenOdd(arr1, n1);

    int n2;
    cin >> n2;
    string* arr2 = new string[n2];
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    findMinMaxStrings(arr2, n2);

    int n3;
    cin >> n3;
    double* arr3 = new double[n3];
    for (int i = 0; i < n3; i++) {
        cin >> arr3[i];
    }
    sumReverse(arr3, n3);

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;

    return 0;
}
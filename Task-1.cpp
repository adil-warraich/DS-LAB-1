#include <iostream>
#include <string>
using namespace std;

template <typename T, size_t N>
void printArray(T(&arr)[N]) {
    for (size_t i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T, size_t N>
void selectionSort(T(&A)[N]) {
    for (size_t I = 0; I < N - 1; I++) {
        size_t SmallSub = I;

        for (size_t J = I + 1; J < N; J++) {
            if (A[J] < A[SmallSub]) {
                SmallSub = J;
            }
        }

        if (SmallSub != I) {
            T temp = A[I];
            A[I] = A[SmallSub];
            A[SmallSub] = temp;
        }
    }
}

int main() {

    int intArray[5] = { 98, 10, 25, 22, 1 };
    cout << "Original integer array: ";
    printArray(intArray);

    selectionSort(intArray);

    cout << "Sorted integer array: ";
    printArray(intArray);

    string stringArray[4] = { "apple", "orange", "banana", "grape" };
    cout << "\nOriginal string array: ";
    printArray(stringArray);

    selectionSort(stringArray);

    cout << "Sorted string array: ";
    printArray(stringArray);

    return 0;
}
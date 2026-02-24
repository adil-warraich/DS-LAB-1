#include <iostream>
#include <string>
using namespace std;

template <typename T, size_t N>
int linearSearch(T(&A)[N], T Value) {
    for (size_t I = 0; I < N; I++) {
        if (A[I] == Value) {
            return I;  
        }
    }
    return -1;  
}

template <typename T>
void printSearchResult(int index, T key) {
    if (index != -1) {
        cout << "Value " << key << " found at index " << index << endl;
    }
    else {
        cout << "Value " << key << " not found in the array." << endl;
    }
}

int main() {

    int intArray[5] = { 64, 25, 1, 22, 12 };
    int intKey = 12;
    int intIndex = linearSearch(intArray, intKey);
    printSearchResult(intIndex, intKey);

    float floatArray[4] = { 3.14, 2.71, 1.62, 0.57 };
    float floatKey = 2.71;
    int floatIndex = linearSearch(floatArray, floatKey);
    printSearchResult(floatIndex, floatKey);

    string stringArray[4] = { "apple", "orange", "guava", "grape" };
    string stringKey = "apple";
    int stringIndex = linearSearch(stringArray, stringKey);
    printSearchResult(stringIndex, stringKey);

    return 0;
}
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int size;
    cin >> size;
    int numbers[size];
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    for (int i = size - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }

    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int size;
    cin >> size;

    int q;
    cin >> q;

    // store arrays
    vector<vector<int>> arrays;
    for (int i = 0; i < size; i++) {
        int length;
        cin >> length;

        vector<int> temp_array;
        for (int j = 0; j < length; j++){
            int value;
            cin >> value;

            temp_array.push_back(value);
        }
        arrays.push_back(temp_array);
    }

    
    // process queries
    for (int i = 0; i < q; i++) {
        int array_index, value_index;
        cin >> array_index >> value_index;
        cout << arrays[array_index][value_index] << endl;
    }

    return 0;
}

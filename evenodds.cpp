#include <iostream>
using namespace std;

int main() {
    int x, position;
    cin >> x >> position; // Input total elements and the position (1-based indexing)

    int arr[x];

    // Input array elements
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }

    // Output the value at the given position (convert 1-based indexing to 0-based indexing)
    cout << arr[position - 1] << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to count inversions in an array using Merge Sort
long long mergeAndCount(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;
    long long invCount = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            invCount += (mid - i + 1);
        }
    }

    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    for (int i = left; i <= right; i++) arr[i] = temp[i];

    return invCount;
}

long long mergeSortAndCount(vector<int>& arr, vector<int>& temp, int left, int right) {
    long long invCount = 0;
    if (left < right) {
        int mid = (left + right) / 2;
        invCount += mergeSortAndCount(arr, temp, left, mid);
        invCount += mergeSortAndCount(arr, temp, mid + 1, right);
        invCount += mergeAndCount(arr, temp, left, mid, right);
    }
    return invCount;
}

// Function to perform cyclic shift of subarray [l, r]
void cyclicShift(vector<int>& arr, int l, int r) {
    int first = arr[l];
    for (int i = l; i < r; i++) {
        arr[i] = arr[i + 1];
    }
    arr[r] = first;
}

// Optimized function to find the best subarray to minimize inversions
pair<int, int> findOptimalShift(vector<int>& arr) {
    int n = arr.size();
    long long minInversions = 100000000000000000;
    pair<int, int> bestLR = {1, 1}; 

    vector<int> tempArr = arr;
    vector<int> temp(n);
    long long initialInversions = mergeSortAndCount(tempArr, temp, 0, n - 1);

    // Try all possible subarrays [l, r] but avoid full recalculation of inversions
    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            vector<int> shiftedArr = arr;
            cyclicShift(shiftedArr, l, r);
            vector<int> temp(n);
            long long newInversions = mergeSortAndCount(shiftedArr, temp, 0, n - 1);
            
            if (newInversions < minInversions) {
                minInversions = newInversions;
                bestLR = {l + 1, r + 1}; // Store 1-based indices
            }
        }
    }

    return bestLR;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        pair<int, int> result = findOptimalShift(arr);
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}

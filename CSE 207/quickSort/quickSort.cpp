#include <bits/stdc++.h>
using namespace std;

// Partition function
int partition(vector<int> &A, int l, int h) {
    int pivot = A[l];
    int i = l, j = h;

    while (i < j) {
        while (i <= h && A[i] <= pivot) i++;
        while (A[j] > pivot) j--;

        if (i < j)
            swap(A[i], A[j]);
    }

    swap(A[l], A[j]);
    return j;
}

// QuickSort function
void quickSort(vector<int> &A, int l, int h) {
    if (l < h) {
        int j = partition(A, l, h);
        quickSort(A, l, j - 1);
        quickSort(A, j + 1, h);
    }
}

int main() {
    int n;
    cin >> n;  // Input array size

    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];  // Input array elements

    quickSort(A, 0, n - 1);  // Sort array

    for (int i = 0; i < n; i++) cout << A[i] << " ";  // Print sorted array
    cout << endl;

    return 0;
}
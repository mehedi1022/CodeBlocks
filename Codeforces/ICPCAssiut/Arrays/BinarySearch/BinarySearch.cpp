#include<bits/stdc++.h>
using namespace std;
int temp[100000];
void merge(int A[], int l, int mid, int h) {
    int i = l;
    int j = mid + 1;
    int k = l;

    // Merge the two sorted halves into temp[]
    while (i <= mid && j <= h) {
        if (A[i] <= A[j]) {
            temp[k] = A[i];
            i++;
        } else {
            temp[k] = A[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from left half
    while (i <= mid) {
        temp[k] = A[i];
        i++;
        k++;
    }

    // Copy remaining elements from right half
    while (j <= h) {
        temp[k] = A[j];
        j++;
        k++;
    }

    // Copy merged elements back into original array
    for (k = l; k <= h; k++) {
        A[k] = temp[k];
    }
}

void mergesort(int A[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;

        mergesort(A, l, mid);       // Sort left half
        mergesort(A, mid + 1, h);   // Sort right half
        merge(A, l, mid, h);        // Merge the two halves
    }
}


int main()
{
int n, q, i, j;
cin >> n >> q;
int A[n];
for(i = 0; i < n; i++){
    cin >> A[i];
}

 mergesort(A, 0, n - 1);

for(i = 0; i < q; i++){
    int l, r, mid, t, res;
    cin >> t;
    l = 0;
    r = n - 1;

    bool f = false;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if(t == A[mid]){
            f = true;
            break;
        }else if(t > A[mid]){
            l  = mid + 1;
        }else{
            r = mid - 1;
        }
    }
   if(f == true){
    cout << "found" << endl;
   }else{
    cout << "not found" << endl;
   }
    
}
    return 0;
}
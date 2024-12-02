#include <stdio.h>

int main() {

    int mat[4][4] = {
        {0, 0, 1, 1},
        {0, 1, 1, 1},
        {0, 0, 0, 0},
        {1, 1, 1, 1}
    };

    int rows = 4;
    int cols = 4;

    int omax = 0;
    int r = 0;


    for (int i = 0; i < rows; i++) {

        int lo = 0;
        int hi = cols - 1;
        int fi1 = cols;


        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (mat[i][mid] == 1) {
                fi1 = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }


        int coir = cols - fi1;


        if (coir > omax) {
            omax = coir;
            r = i;
        }
    }


    printf("Row with the most 1s is: %d\n", r);

    return 0;
}

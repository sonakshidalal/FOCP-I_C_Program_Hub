/*Problem statement: Given n, print a centered diamond. The upper half has n rows including the widest row; then print n -
1 rows in decreasing width.
Input format: One integer n (1 ≤ n ≤ 10), representing the number of rows in the upper half.
Output format: Print 2n - 1 centered lines.*/

#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);

    // Upper half including the widest row
    for (i = 1; i <= n; i++) {

        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {

        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
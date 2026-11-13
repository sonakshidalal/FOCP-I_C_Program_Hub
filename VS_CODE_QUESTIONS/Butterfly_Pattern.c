/*Problem statement: Given an odd integer n, print a butterfly made of asterisks. The top half widens row by row and the
lower half mirrors it. Use spaces between the left and right wings.
Input format: One odd integer n (3 ≤ n ≤ 19).
Output format: Print n lines. Each line contains left and right wings with a central gap.*/


#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);

    // Upper half
    for (i = 1; i <= n / 2 + 1; i++) {

        // Left wing
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        // Spaces in middle
        for (j = 1; j <= 2 * (n / 2 + 1 - i); j++) {
            printf(" ");
        }

        // Right wing
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for (i = n / 2; i >= 1; i--) {

        // Left wing
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        // Spaces in middle
        for (j = 1; j <= 2 * (n / 2 + 1 - i); j++) {
            printf(" ");
        }

        // Right wing
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
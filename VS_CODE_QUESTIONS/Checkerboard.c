/*Problem statement: Given n, print an n-by-n checkerboard using X and O. The top-left character must be X; adjacent
horizontal and vertical cells alternate.
Input format: One integer n (1 ≤ n ≤ 20).
Output format: Print n lines of n characters, without spaces between characters.*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if((i + j) % 2 == 0)
            {
                printf("X");
            }
            else
            {
                printf("O");
            }
        }
        printf("\n");
    }
    return 0;
}
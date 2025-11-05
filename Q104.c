//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

#include <stdio.h>

int main() {
    int n = 8;
    int i, j, sum1, sum2;

    for (i = 1; i <= n; i++) {
        sum1 = 0;
        sum2 = 0;

        for (j = 1; j <= i; j++) {
            sum1 += j;
        }

        for (j = i; j <= n; j++) {
            sum2 += j;
        }

        if (sum1 == sum2) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}

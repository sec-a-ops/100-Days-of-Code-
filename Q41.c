//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int swapFirstLast(int num) {
    int digits = (int)log10(num);
    int first = num / pow(10, digits);
    int last = num % 10;
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;
    int swapped = last * pow(10, digits) + middle * 10 + first;
    return swapped;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", swapFirstLast(num));
    return 0;
}

//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float principal, rate, time, si, ci;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    si = (principal * rate * time) / 100;
    ci = principal * pow((1 + rate / 100), time) - principal;
    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", si, ci);
    getch();
    return 0;
}

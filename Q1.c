//Q1: Write a program to input two numbers and display their sum.
/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7
Input 2:
-1 20
Output 2:
Sum = 19
*/
#include<stdio.h>
#include<conio.h>
int main(){
  int sum,a,b;
  printf("Enter your first number= ");
  scanf("%d", &a);
  printf("Enter your second number= ");
  scanf("%d", &b);
  sum = a + b;
  printf("Your answer is = %d", sum);
  getch();
 return 0;  
}

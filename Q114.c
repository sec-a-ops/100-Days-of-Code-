//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3
*/
#include <stdio.h>
#include <string.h>

int isUnique(char *s, int start, int end) {
    int i, j;
    for (i = start; i < end; i++) {
        for (j = i + 1; j <= end; j++) {
            if (s[i] == s[j]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    char s[] = "abcabcbb";
    int n = strlen(s);
    int maxLen = 0, i, j;

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (isUnique(s, i, j)) {
                int len = j - i + 1;
                if (len > maxLen) {
                    maxLen = len;
                }
            }
        }
    }

    printf("%d\n", maxLen);
    return 0;
}

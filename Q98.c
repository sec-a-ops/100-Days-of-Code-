//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter a name: ");
    scanf(" %[^\n]", name);

    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            if (strchr(name + i, ' ') != NULL)
                printf("%c.", name[i]);
            else {
                printf(" %s\n", name + i);
                return 0;
            }
        }
    }

    printf("\n");
    return 0;
}

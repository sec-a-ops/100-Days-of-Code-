//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    scanf(" %[^\n]", name);

    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c.", name[i]);
    }

    printf("\n");
    return 0;
}

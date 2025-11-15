#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int length;

    printf("Enter a string: ");
    fgets(name, sizeof(name), stdin);

    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }
    printf("You entered: %s\n", name);
    length = strlen(name);
    printf("Length of the string: %d\n", length);
    return 0;
}


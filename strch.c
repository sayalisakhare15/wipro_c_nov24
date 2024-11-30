#include <stdio.h>

int main() {
    char str[50]; 

    printf("Enter a string: ");
    scanf("%49s", str); 

    printf("\nOriginal string: %s\n", str);

    
    printf("Characters of the string:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("Character at index %d: %c (ASCII: %d)\n", i, str[i], str[i]);
    }

    return 0;
}
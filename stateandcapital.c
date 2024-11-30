#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    
    char states[10][32];
    char capitals[10][32];
    
    if (argc < 2) {
        printf("Please provide state-capital pairs as arguments.\n");
        return 1; 
    }

    int count = argc - 1; 
    if (count > 10) {
        printf("Only up to 10 state-capital pairs can be handled.\n");
        count = 10;
    }

    for (int i = 1; i <= count; i++) {
        char *state = strtok(argv[i], " ");
        char *capital = strtok(NULL, " "); 

        if (state != NULL && capital != NULL) {
            strcpy(states[i - 1], state);   
            strcpy(capitals[i - 1], capital); 
        } else {
            printf("Invalid format for input: %s\n", argv[i]);
            return 1; 
        }
    }

    printf("\n%-15s %-15s\n", "STATE", "CAPITAL");
    printf("-----------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-15s %-15s\n", states[i], capitals[i]);
    }

    return 0;
}
#include <stdio.h>

int main() {
    
    char president_names[5][2][20]; 
    puts("Enter First and Second names of the last 5 Presidents of India:");

    
    for (int i = 0; i < 5; i++) {
        printf("President %d First Name: ", i + 1);
        scanf("%s", president_names[i][0]); 
        printf("President %d Second Name: ", i + 1);
        scanf("%s", president_names[i][1]); 
    }

    
    printf("\n%-12s %-12s\n", "FIRST-NAME", "SECOND-NAME");
    printf("------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-12s %-12s\n", president_names[i][0], president_names[i][1]);
    }

    return 0;
}
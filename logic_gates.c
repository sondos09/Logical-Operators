#include <stdio.h>

void clear_input_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) {
    int num1, num2, choice, result;

    printf("1. AND\n2. OR\n3. XOR\n4. NOT\n");
    printf("Choice: ");
    
    if (scanf("%d", &choice) != 1) {
        printf("Error: Please enter a valid number!\n");
        return 1;
    }

    if (choice < 1 || choice > 4) {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Number 1: ");
    if (scanf("%d", &num1) != 1) {
        printf("Error: Invalid number!\n");
        clear_input_buffer();
        return 1;
    }

    if (choice != 4) {
        printf("Number 2: ");
        if (scanf("%d", &num2) != 1) {
            printf("Error: Invalid number!\n");
            clear_input_buffer();
            return 1;
        }
    }

    switch (choice) {
        case 1:
            result = num1 & num2;
            printf("AND: %d\n", result);
            break;
        case 2:
            result = num1 | num2;
            printf("OR: %d\n", result);
            break;
        case 3:
            result = num1 ^ num2;
            printf("XOR: %d\n", result);
            break;
        case 4:
            result = ~num1;
            printf("NOT (~Number 1): %d\n", result);
            break;
    }

    return 0;
}

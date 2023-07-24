#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convertToDecimal(const char* input)
{
    printf("ASCII to Decimal:\n");
    printf("Input String: %s\n", input);
    printf("Decimal Values: ");
    
    for (int i = 0; input[i] != '\0'; i++)
    {
        printf("%d ", input[i]);
    }
    printf("\n");
}

void convertToASCII(const char* input)
{
    printf("Decimal to ASCII:\n");
    printf("Input String: %s\n", input);
    printf("ASCII Characters: ");
    
    char* token = strtok((char*)input, " ");
    while (token != NULL)
    {
        int decimalValue = atoi(token);
        printf("%c", decimalValue);
        token = strtok(NULL, " ");
    }
    printf("\n");
}

int main()
{
    int choice = 0;
    char input[100];

    do
    {
        // Menu choices
        printf("*****ASCII Converter*****\n");
        printf("1. ASCII to Decimal.\n");
        printf("2. Decimal to ASCII.\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        system("cls");
        switch (choice)
        {
            case 1:
            {
                // ASCII to Decimal
                printf("Enter a string of words: ");
                scanf(" %[^\n]", input);
                convertToDecimal(input);
                break;
            }
            case 2:
            {
                // Decimal to ASCII
                printf("Enter a string of decimal values (space-separated): ");
                scanf(" %[^\n]", input);
                convertToASCII(input);
                break;
            }
            case 3:
            {
                // Exit
                printf("Exiting the program.\n");
                break;
            }
            default:
            {
                printf("Invalid choice. Please enter a valid option.\n");
                break;
            }
        }
        printf("\n");
    } while (choice != 3);

    system("pause");
    return 0;
}

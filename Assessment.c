#include <stdio.h>
#include <string.h>
#include <ctype.h>

//reverse string
void reverse_string(char str[]) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

//concatenate strings
void concatenate_strings(char str1[], char str2[]) {
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);
}

// palindrome
void check_palindrome(char str[]) {
    int len = strlen(str);
    int flag = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}

//copy string
void copy_string(char str[]) {
    char copy[100];
    strcpy(copy, str);
    printf("Copied String: %s\n", copy);
}

//length of a string
void string_length(char str[]) {
    printf("Length of the String: %ld\n", strlen(str));
}

void char_frequency(char str[], char c) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            count++;
        }
    }
    printf("Frequency of '%c': %d\n", c, count);
}

// Function to count vowels and consonants
void count_vowels_consonants(char str[]) {
    int vowels = 0, consonants = 0;
    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (isalpha(ch)) {
            consonants++;
        }
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
}

//count blank spaces and digits
void count_spaces_digits(char str[]) {
    int spaces = 0, digits = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            spaces++;
        } else if (isdigit(str[i])) {
            digits++;
        }
    }
    printf("Spaces: %d, Digits: %d\n", spaces, digits);
}

int main() {
    char str[100], str2[100];
    char ch;
    int choice;
    char continue_choice;

    do {
        // Display
        printf("\nString Operations Menu:\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate two strings\n");
        printf("3. Check if a string is a palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Find the length of the string\n");
        printf("6. Find the frequency of a character in the string\n");
        printf("7. Find the number of vowels and consonants\n");
        printf("8. Find the number of blank spaces and digits\n");
        printf("Enter your choice (1-8): ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                gets(str);
                printf("Reversed String: ");
                reverse_string(str);
                break;
            case 2:
                printf("Enter first string: ");
                gets(str);
                printf("Enter second string: ");
                gets(str2);
                concatenate_strings(str, str2);
                break;
            case 3:
                printf("Enter a string: ");
                gets(str);
                check_palindrome(str);
                break;
            case 4:
                printf("Enter a string: ");
                gets(str);
                copy_string(str);
                break;
            case 5:
                printf("Enter a string: ");
                gets(str);
                string_length(str);
                break;
            case 6:
                printf("Enter a string: ");
                gets(str);
                printf("Enter a character to find its frequency: ");
                scanf("%c", &ch);
                char_frequency(str, ch);
                break;
            case 7:
                printf("Enter a string: ");
                gets(str);
                count_vowels_consonants(str);
                break;
            case 8:
                printf("Enter a string: ");
                gets(str);
                count_spaces_digits(str);
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &continue_choice);
    } while (continue_choice == 'y' || continue_choice == 'Y');

    return 0;
}

#include <stdio.h>
int main() {
    // This program checks if a given string is a palindrome or not
    char str[100];
    int i, length, flag = 0;    
    printf("Enter a string: ");
    scanf("%s", str);
    // Calculate the length of the string
    for(length = 0; str[length] != '\0'; length++);
    // Check for palindrome     
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

#include <stdio.h>

int main() {
    char first_name[20];
    char last_name[20];
    printf("Please enter your name: ");
    scanf("%19s%19s", first_name, last_name);
    printf("Your name is %s\n", first_name);
    return 0;
}

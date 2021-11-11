#include <stdio.h>

int main() {
    char food[6];
    printf("Enter 5 symbols: ");
    fgets(food, sizeof(food), stdin);
    printf("%s\n", food);
    return 0;
}

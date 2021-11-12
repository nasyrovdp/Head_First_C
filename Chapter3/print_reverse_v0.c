#include <stdio.h>
#include <string.h>

void print_reverse(char *s) {
    size_t len = strlen(s);
    char *t = s + len - 1;
    while (t >= s) {
        printf("%c", *t);
        t = t - 1;
    }
    puts("");
}

int main() {
    char message[99];
    puts("Please enter the message for reverse printing:");
    fgets(message, 99, stdin);
    print_reverse(message);
    return 0;
}

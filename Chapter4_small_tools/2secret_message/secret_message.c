#include <stdio.h>

int main() {
    char word[10];
    int i = 0;
    while (scanf("%9s", word) == 1) {
        i = i + 1;
        if (i % 2) {
            fprintf(stdout, "%s ", word);
        } else {
            fprintf(stderr, "%s ", word);
        }
    }
    return 0;
}

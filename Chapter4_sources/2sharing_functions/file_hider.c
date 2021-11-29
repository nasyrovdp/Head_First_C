#include <stdio.h>
#include <stdlib.h>
#include "encrypt.h"

int main(int argc, char *argv[]) {
    char msg[80];
    if (argc != 3) {
        fprintf(stderr, "usage: ./file_hider source_file destination_file_name\n");
        return 1;
    }
    FILE *in = fopen(argv[1], "r");
    FILE *out = fopen(argv[2], "w");
    while (fgets(msg, 80, in)) {
        encrypt(msg);
        fprintf(out, "%s", msg);
    }
    fclose(in);
    fclose(out);
    return 0;
}

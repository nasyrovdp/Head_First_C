#include <stdio.h>

int main() {
    float latitude;
    float longitude;
    char info[80];
    char line[300];
    while (fgets(line, 300, stdin)) {
        scanf("%f,%f,%79[^\n]", &latitude, &longitude, info);
        if ((latitude > 26) && (latitude < 34) && (longitude > -76) && (longitude < -64)) {
            printf("%s", line);
        }
    }
    return 0;
}

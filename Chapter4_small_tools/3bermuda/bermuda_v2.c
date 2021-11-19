#include <stdio.h>

int main() {
    float latitude;
    float longitude;
    char info[80];
    char line[300];
    while (scanf("%299[^\n]\n", line) == 1) {
        scanf("%f,%f,%179[^\n]", &latitude, &longitude, info);
        if ((latitude > 26) && (latitude < 34) && (longitude > -76) && (longitude < -64)) {
            printf("%s\n", line);
        }
    }
    return 0;
}
